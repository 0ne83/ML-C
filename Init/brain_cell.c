#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

float train[][2] = {{0, 0}, {1, 3}, {2, 6}, {3, 9}, {4, 12}};

#define train_count (sizeof(train) / sizeof(train[0]))

float rand_float(void) { return (float)rand() / (float)RAND_MAX; }

float cost(float w, float b) {
  float result = 0.0f;

  for (size_t i = 0; i < train_count; ++i) {
    float x = train[i][0];
    float y = x * w + b;
    // printf("Expected Value: %f, Actual Value %f\n", y, train[i][1]);
    float d = y - train[i][1];
    result += d * d;
  }
  result /= train_count;
  return result;
}

int main(void) {

  srand(69);
  float w = rand_float() * 10.0f;
  float b = rand_float() * 5.0f;

  float eps = 1e-3;
  float rate = 1e-3;

  printf("%f\n", cost(w, b));
  for (size_t i = 0; i < 2000000; ++i) {
    float c = cost(w, b);
    float dw = (cost(w + eps, b) - c) / eps;
    float db = (cost(w, b + eps) - c) / eps;

    w -= rate * dw;
    b -= rate * db;

    // printf("Cost = %f, W = %f, B = %f\n", cost(w, b), w, b);
  }

  printf("-----------------------------------------\n");
  printf("W = %f, B = %f\n", w, b);
  return 0;
}
