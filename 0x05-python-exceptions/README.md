### Python - Exceptions


## Resources

- Read or watch:
  - [Errors and Exceptions](https://docs.python.org/3/tutorial/errors.html)
  - [Learn to Program 11 Static & Exception Handling (starting at minute 7)](https://www.youtube.com/watch?v=7vbgD-3s-w4)

## Learning Objectives

By the end of this project, you are expected to be able to explain to anyone, without the help of Google:

- Why Python programming is awesome
- The difference between errors and exceptions
- What exceptions are and how to use them
- When to use exceptions
- How to correctly handle an exception
- The purpose of catching exceptions
- How to raise a built-in exception
- When to implement a clean-up action after an exception

## Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work. You are not allowed to publish any content of this project. Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

- **General:**
  - Allowed editors: vi, vim, emacs
  - All your files will be interpreted/compiled on Ubuntu 20.04 LTS using Python 3 (version 3.8.5)
  - All your files should end with a new line
  - The first line of all your files should be exactly `#!/usr/bin/python3`
  - A `README.md` file, at the root of the folder of the project, is mandatory
  - Your code should use the pycodestyle (version 2.8.*)
  - All your files must be executable
  - The length of your files will be tested using `wc`

## Tasks

### 0. Safe list printing (mandatory)

Write a function that prints x elements of a list.

Prototype: `def safe_print_list(my_list=[], x=0):`

- `my_list` can contain any type (integer, string, etc.)
- All elements must be printed on the same line followed by a new line.
- `x` represents the number of elements to print
- `x` can be bigger than the length of `my_list`
- Returns the real number of elements printed
- You have to use `try:` / `except:`
- You are not allowed to import any module
- You are not allowed to use `len()`

### 1. Safe printing of an integers list (mandatory)

Write a function that prints an integer with `"{:d}".format()`.

Prototype: `def safe_print_integer(value):`

- `value` can be any type (integer, string, etc.)
- The integer should be printed followed by a new line
- Returns `True` if `value` has been correctly printed (it means the value is an integer)
- Otherwise, returns `False`
- You have to use `try:` / `except:`
- You have to use `"{:d}".format()` to print as integer
- You are not allowed to import any module
- You are not allowed to use `type()`

### 2. Print and count integers (mandatory)

Write a function that prints the first x elements of a list and only integers.

Prototype: `def safe_print_list_integers(my_list=[], x=0):`

- `my_list` can contain any type (integer, string, etc.)
- All integers have to be printed on the same line followed by a new line - other types of value in the list must be skipped (in silence).
- `x` represents the number of elements to access in `my_list`
- `x` can be bigger than the length of `my_list` - if it’s the case, an exception is expected to occur
- Returns the real number of integers printed
- You have to use `try:` / `except:`
- You have to use `"{:d}".format()` to print an integer
- You are not allowed to import any module
- You are not allowed to use `len()`

### 3. Integers division with debug (mandatory)

Write a function that divides 2 integers and prints the result.

Prototype: `def safe_print_division(a, b):`

- You can assume that `a` and `b` are integers
- The result of the division should print on the finally: section preceded by Inside result:
- Returns the value of the division, otherwise: `None`
- You have to use `try:` / `except:` / `finally:`
- You have to use `"{}".format()` to print the result
- You are not allowed to import any module
