# ML-C: Neural Network Implementations

## Introduction

This section of the **ML-C** repository contains two separate neural network implementations: **braincell** and **nn**. Both aim to illustrate the inner workings of neural networks, but each takes a slightly different approach and complexity level. These projects are written entirely in C and avoid external dependencies, making them great educational tools for understanding how neural networks function at a lower level.

## Braincell

The **braincell** project demonstrates the operation of a **single neuron** or "brain cell" within a neural network. It is a minimalistic and simple implementation, focused on how a single neuron can take inputs, apply weights and biases, and output predictions using an activation function.

### Key Features:
- **Single Neuron**: The project deals with only one neuron to illustrate how inputs are transformed through a weighted sum and bias.
- **Sigmoid Activation**: The neuron uses a sigmoid activation function to produce an output between 0 and 1.
- **Backpropagation**: Simple backpropagation is implemented to adjust weights and biases based on the error between predicted and actual values.

This implementation is primarily for educational purposes, showing how neural networks function at the most basic unit level.

## NN

The **nn** project is a more complex and feature-rich implementation of a **multi-layered neural network**. Unlike **braincell**, which focuses on a single neuron, **nn** demonstrates how a full neural network with multiple layers of neurons can be constructed and trained.

### Key Features:
- **Multi-Layer Neural Network**: This project implements a fully connected neural network with multiple layers, providing a more complete picture of how neural networks operate in practice.
- **Forward and Backward Propagation**: Includes both forward propagation to compute outputs and backward propagation to adjust weights and biases based on errors.
- **Multiple Activation Functions**: The project supports different activation functions (like ReLU, sigmoid, etc.), offering flexibility in the type of neural network used.
- **Training and Testing**: The network can be trained on datasets and then tested to measure its performance, showcasing how neural networks learn from data.

This project is more advanced and represents a typical neural network used in machine learning applications, making it suitable for users who want to understand the mechanics behind larger and more functional networks.
