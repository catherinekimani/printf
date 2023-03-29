# Printf Project
## Introduction
<p>This is a simple program that uses the printf function to display a message on the console. The purpose of this program is to demonstrate how the printf function works and how it can be used to format and display output.</p>

## Features
The `printf` function is used to `print` formatted output to the console. Our simplified version of printf supports the following format specifiers:

| Specifier | Output                                |
|-----------|---------------------------------------|
| %c        | Prints a single character             |
| %s        | Prints a null-terminated string       |
| %d        | Prints a signed integer               |
| %i        | Prints a signed integer               |
| %u        | Prints an unsigned integer            |
| %x        | Prints an unsigned hexadecimal integer|
| %%        | Prints a literal percent sign         |
<p>In addition to these format specifiers, our printf function also supports the following flags:</p>

| Flag | Description |
|------|-------------|
| -    | Left-justify the output 	  		|
| 0    | Pad with zeros instead of spaces 		|
| .    | Precision specifier for floating point numbers |

## Getting Started
To get started with the printf project, clone the repository and build the program with a C compiler such as gcc. The project contains a test suite to ensure that the function is working correctly.
```bash
git clone https://github.com/yourusername/printf-project.git
cd printf
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test_printf
./test_printf
```
<p>This will compile all the .c files in the current directory using gcc with the specified flags and output an executable file named "test_printf". The "./test_printf" command will then run the test suite to ensure that the printf function is working correctly. Make sure to replace "yourusername" with your GitHub username in the Git clone URL.</p>

## Authors
This project was created by Catherine and Josphat Lemaiyan. If you have any questions or feedback, please feel free to <a href="mailto:catherinekimani882@gmail.com,josphatlemayan74@gmail.com">contact us</a>.
