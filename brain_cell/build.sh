#!/bin/sh

set -xe

clang -Wall -Wextra -o brain_cell brain_cell.c

clang -Wall -Wextra -o gates gates.c

clang -Wall -Wextra -o xor xor.c
