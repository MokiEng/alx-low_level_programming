# C - Makefiles

This repository contains a simple guide on using Makefiles for building C projects. Makefiles are a powerful tool for automating the compilation and building process of C programs, ensuring that only the necessary files are recompiled when changes are made.

## Features

- Provides a basic structure for a Makefile.
- Defines variables to store compiler options, file names, and directories.
- Demonstrates rules for building the final executable and compiling individual source files.
- Includes a rule for cleaning the project.
- Offers flexibility for customization based on project requirements.

## Getting Started

1. Clone this repository or create a new directory for your C project.
2. Create a file named "Makefile" (without any file extension) in the root directory of your project.
3. Open the Makefile using a text editor or an integrated development environment (IDE).
4. Define the necessary variables based on your project's configuration, such as the compiler, compiler flags, source files, object files, and the final executable name.
5. Write the rules in the Makefile, specifying the dependencies and commands for building the target.
6. Add additional rules as needed, such as rules for compiling individual source files or cleaning the project.
7. Save the Makefile.
8. Open a terminal or command prompt, navigate to the project's root directory, and run the `make` command.
9. Make will read the Makefile and execute the appropriate commands to build your C program according to the defined rules.

## Example

Here's a simple example of a Makefile for a C project:

```
CC = gcc
CFLAGS = -Wall -O2
SRC = main.c utils.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = myprogram

$(EXECUTABLE): $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $(EXECUTABLE)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ) $(EXECUTABLE)
```

In this example, the Makefile defines variables for the compiler (`CC`), compiler flags (`CFLAGS`), source files (`SRC`), object files (`OBJ`), and the final executable name (`EXECUTABLE`). It also includes rules for building the executable, compiling individual source files, and cleaning the project.

## Customization

Feel free to customize the Makefile according to your project's specific requirements. You can add more rules, variables, or specify additional compiler flags based on your needs.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute it as per the terms of the license.

## Contributions

Contributions to improve and expand this guide are welcome. Feel free to open issues or pull requests with any suggestions or enhancements.

## Resources

- [GNU Make Manual](https://www.gnu.org/software/make/manual/)
- [Tutorial: Makefiles for C Programs](https://www.cs.swarthmore.edu/~newhall/unixhelp/howto_makefiles.html)

Enjoy building your C projects using Makefiles!
