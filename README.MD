# ft_printf: Printf Replication Project 🎯

Welcome to **ft_printf** - Your Custom Printf Implementation for Precision Coding!

## Overview

**ft_printf** is a project aimed at replicating the behavior of the standard C library's `printf` function. This powerful tool allows you to format and print output in a highly customizable way, just like the familiar `printf` we all know and love.

### Moulinette

<img src="image.png" alt="drawing" width="800"/>

## Features

- **Supported Conversions:** `%c`, `%s`, `%d`, `%i`, `%x`, `%X`, and `%p` are fully implemented, providing you with a comprehensive range of formatting options.
- **Flags for Precision:** Utilize the ' .-0' flags to control alignment, precision, and width, ensuring your output looks exactly the way you want it.

## Getting Started

Getting started with **ft_printf** is a breeze:

1. **Clone the Repository:** \
   Clone the repository by running `git clone https://github.com/YourUsername/ft_printf.git ft_printf` in your local workspace.

2. **Include the Header:** \
   Add `#include "ft_printf.h"` to your files. This grants you access to the incredible power of **ft_printf** functions.

3. **Compile ft_printf:** \
   Run `make -C $(PRINTFDIR)` to create the `libftprintf.a` static library. This library is your toolkit for precise and customized output formatting.

4. **Link ft_printf:** \
   When compiling your project, include the static library using `-L ft_printf -lftprintf`. This step ensures that your code harnesses the magic of **ft_printf**.

## Makefile

The Makefile for **ft_printf** consists of five essential rules:

1. **all** \
   Launch `make all` to create the `libftprintf.a` static library, containing all mandatory conversions and additional custom functions.

2. **clean** \
   Execute `make clean` to remove all .o object files generated during compilation.

3. **fclean** \
   Run `make fclean` to remove all .o object files and the `libftprintf.a` library file.

4. **re** \
   Execute `make re` to recompile the entire **ft_printf** project. This rule forces the execution of `make fclean` and `make all`.

## Example

```c
#include "ft_printf.h"

int main() {
    ft_printf("Formatted Output: %s | Integer: %d | Hex: %x\n", "Hello, World!", 42, 255);
    return 0;
}
