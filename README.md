# Unexpected Pointer Behavior in C

This repository demonstrates a common error related to pointer arithmetic in C. The code modifies a value through a pointer, leading to unexpected behavior if not handled correctly.

## Bug Description:
The `bug.c` file contains a simple program that declares an integer variable, assigns its address to a pointer, and then modifies the value pointed to.  The unexpected behavior comes from not clearly understanding the pointer's role and potential issues.

## Solution:
The `bugSolution.c` demonstrates how to avoid this error by using safe pointer handling practices. 

## How to Run:
1. Clone this repository
2. Compile `bug.c` using a C compiler (e.g., GCC): `gcc bug.c -o bug`
3. Compile `bugSolution.c`: `gcc bugSolution.c -o bugSolution`
4. Run the executables: `./bug` and `./bugSolution`