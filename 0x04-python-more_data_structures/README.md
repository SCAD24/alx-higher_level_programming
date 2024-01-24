# 0x04. Python - More Data Structures: Set, Dictionary

## Overview

This repository contains Python programs that explore the concepts of sets and dictionaries in Python. It includes various tasks that involve manipulating sets and dictionaries to solve problems.

## Project Description

### Learning Objectives

At the end of this project, you will be able to:

- Understand why Python programming is awesome.
- Work with sets and understand their common methods.
- Use dictionaries and know when to choose them over lists or sets.
- Iterate over sets and dictionaries.
- Create and use lambda functions.
- Utilize the `map`, `reduce`, and `filter` functions effectively.

### Requirements

- Allowed editors: vi, vim, emacs
- All files will be interpreted/compiled on Ubuntu 20.04 LTS using Python3 (version 3.8.5).
- All files should end with a new line.
- The first line of all your files should be exactly `#!/usr/bin/python3`.
- A README.md file at the root of the folder is mandatory.
- Code should use the PEP 8 style (version 2.8.*).
- All files must be executable.
- The length of your files will be tested using `wc`.

## Tasks

### 0. Squared Simple

Write a function that computes the square value of all integers of a matrix.

```python
def square_matrix_simple(matrix=[]):
    """Computes the square value of all integers of a matrix."""
```

### 1. Search and Replace

Write a function that replaces all occurrences of an element by another in a new list.

```python
def search_replace(my_list, search, replace):
    """Replaces all occurrences of an element in a new list."""
```

### 2. Unique Addition

Write a function that adds all unique integers in a list (only once for each integer).

```python
def uniq_add(my_list=[]):
    """Adds all unique integers in a list."""
```

### 3. Present in Both

Write a function that returns a set of common elements in two sets.

```python
def common_elements(set_1, set_2):
    """Returns a set of common elements in two sets."""
```

### 4. Only Differents

Write a function that returns a set of all elements present in only one set.

```python
def only_diff_elements(set_1, set_2):
    """Returns a set of all elements present in only one set."""
```

### 5. Number of Keys

Write a function that returns the number of keys in a dictionary.

```python
def number_keys(a_dictionary):
    """Returns the number of keys in a dictionary."""
```

### 6. Print Sorted Dictionary

Write a function that prints a dictionary by ordered keys.

```python
def print_sorted_dictionary(a_dictionary):
    """Prints a dictionary by ordered keys."""
```

### 7. Update Dictionary

Write a function that replaces or adds key/value in a dictionary.

```python
def update_dictionary(a_dictionary, key, value):
    """Replaces or adds key/value in a dictionary."""
```

### 8. Simple Delete by Key

Write a function that deletes a key in a dictionary.

```python
def simple_delete(a_dictionary, key=""):
    """Deletes a key in a dictionary."""
```

### 9. Multiply by 2

Write a function that returns a new dictionary with all values multiplied by 2.

```python
def multiply_by_2(a_dictionary):
    """Returns a new dictionary with all values multiplied by 2."""
```

### 10. Best Score

Write a function that returns a key with the biggest integer value.

```python
def best_score(a_dictionary):
    """Returns a key with the biggest integer value."""
```

### 11. Multiply by Using Map

Write a function that returns a list with all values multiplied by a number without using any loops.

```python
def multiply_list_map(my_list=[], number=0):
    """Returns a list with all values multiplied by a number using map."""
```

### 12. Roman to Integer

Create a function `def roman_to_int(roman_string):` that converts a Roman numeral to an integer.

### 13. Weighted Average

Write a function that returns the weighted average of all integers tuple (`<score>, <weight>`).

```python
def weight_average(my_list=[]):
    """Returns the weighted average of all integers tuple (<score>, <weight>)."""
```

### 14. Squared by Using Map

Write a function that computes the square value of all integers of a matrix using map.

```python
def square_matrix_map(matrix=[]):
    """Computes the square value of all integers of a matrix using map."""
```

### 15. Delete by Value

Write a function that deletes keys with a specific value in a dictionary.

```python
def complex_delete(a_dictionary, value):
    """Deletes keys with a specific value in a dictionary."""
```

### 16. CPython #1: PyBytesObject

Create two C functions that print some basic info about Python lists and Python bytes objects.

```c
void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);
```

