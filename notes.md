# Learn C The Hard Way Notes

## Exercise 1

* When compiling on MacOsX using just the command line tools you'll need to import `stdio.h` otherwise you'll get a compiler warning.

* `CFLAGS` are environment variables used in makefiles which tell the compiler how to behave.

* `-Wall` shows all warnings, `-W` means warnings.

## Exercise 2

* The set flags `-Wall` and `-g` are for showing all errors as I previously stated, the second one allows debugging. Note: the `dSYM` are the debug symbols that are generated.

* `clean` works as a task for duh, cleaning the whole project.

## Exercise 3

* `printf` has several escape codes and format sequences that are listed using `man printf`.

## Exercise 4

* Valgrind is some really hardcore shit.

* Won't work propertly on Yosemite, install with brea using the --HEAD flag.

## Exercise 5

Let's break down the new stuff that you usually don't see anywhere else:

`#include`: works as a import, C uses `.h` files known as headers which contains more code.

`int main`: first we have a type and the `main` keyword which signals the starting point of the code. As any C function it must return the same type.

`int argc` and `char *argv[]` are arguments, the first is the number of them and the other is a array of the same.

## Exercise 6

Let's talk simple data types:

`int`, as integers printed with `%d`.

`float` or `double` for those pesky complex numbers, `double` is bigger. You print them using `%f`.

`char` is a simple character which is printed with `%c`, you must use them using single quotes.

A `string` in C is actually an array of characters. You declare them using `char name[]`, you use them with double quotes and print them with `%s`.

## Exercise 7

In which we understand how C casts stuffs.

We get introduced to the `long` type which is a huge ass number. Gets printed using `%ld`.

Chars are actually numbers in C, that's why Zed creates a `\0` character, which is the number 0.

To print a `%` sign you use a double `%%`.

## Exercise 8

Mostly related to the way C measures stuff byte-wise. `sizeof` seems handy for that.
