# Recursive String Printing Function

This directory contains a C code file that demonstrates a recursive function for printing a string character by character, followed by a new line. The function is implemented using the concept of recursion.

## Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Compilation](#compilation)
- [Contributing](#contributing)
- [License](#license)

## Introduction

The `main.c` file in this repository provides the implementation of the `_puts_recursion` function, which recursively prints a given string. It's implemented using the `_putchar` function, which is used to print individual characters.

## Usage

To use the `_puts_recursion` function, simply provide a C string (null-terminated character array) as an argument. The function will print the characters of the string one by one, followed by a new line.

Example:

```c
#include "main.h"

int main(void)
{
    char str[] = "Hello, world!";
    _puts_recursion(str);
    return 0;
}
