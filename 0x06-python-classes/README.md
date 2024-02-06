### 0x06. Python - Classes and Objects


## Background Context

Object-Oriented Programming (OOP) is introduced in this module. It's crucial to thoroughly understand the principles and concepts of OOP, as it forms the foundation for structuring and organizing code in many modern programming paradigms.

Make sure to read all the provided resources, follow the examples, and experiment with the concepts on your own. Understanding OOP is not just about grasping the theory but also about practical application and experimentation.

### Resources

- [Object-Oriented Programming](#) (Read everything until the paragraph “Inheritance” excluded)
- [Object-Oriented Programming](#) (Be careful with the content in some paragraphs)
- [Properties vs. Getters and Setters](#)
- [Learn to Program 9: Object-Oriented Programming](#)
- [Python Classes and Objects](#)
- [Object Oriented Programming](#)


## Learning Objectives

By the end of this project, you should be able to explain the following concepts without relying on external sources:

- Why Python programming is awesome
- What is OOP and its significance
- Understanding "first-class everything"
- Definition of a class and an object/instance
- Difference between a class and an object/instance
- Understanding attributes and their types (public, protected, private)
- Significance of `self` in Python
- Concept of methods and the special `__init__` method
- Data Abstraction, Data Encapsulation, and Information Hiding
- Understanding properties and their usage
- Difference between attributes and properties in Python
- Writing Pythonic getters and setters
- Dynamically creating attributes for existing instances
- Binding attributes to objects and classes
- Understanding the `__dict__` attribute
- Attribute resolution in Python
- Usage of `getattr` function

### Copyright - Plagiarism

Remember, plagiarism is strictly forbidden. Ensure that you come up with your own solutions to the tasks provided. Copying and pasting someone else’s work will lead to removal from the program.

---

## Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Platform:** Ubuntu 20.04 LTS
- **Python Version:** 3.8.5
- **File Ending:** All files should end with a new line
- **First Line:** All files should start with `#!/usr/bin/python3`
- **README.md:** A mandatory file explaining the project
- **Coding Style:** Follow PEP8 guidelines (use pycodestyle version 2.8.*)
- **Executable:** All files must be executable
- **Documentation:** Include documentation for modules, classes, and functions
- **Documentation Style:** Use Google Style Python Docstrings

### More Info

- Documentation is mandatory. Each module, class, and method must contain a docstring.
- Example Google Style Python Docstrings are provided for reference.

---

## Quiz Questions

Ensure you've completed the quiz successfully. Keep going with the tasks.

---

## Tasks

### 0. My First Square

- Write an empty class `Square` that defines a square.
- No module importation is allowed.

### 1. Square with Size

- Write a class `Square` that defines a square with a private instance attribute `size`.
- Instantiation with size (no type/value verification) is required.
- No module importation is allowed.

### 2. Size Validation

- Extend the `Square` class with size validation:
  - `size` must be an integer, raise `TypeError` if not.
  - `size` must be >= 0, raise `ValueError` if not.
- Instantiation with optional size is allowed.
- No module importation is allowed.

### 3. Area of a Square

- Extend the `Square` class with a public instance method `area()` to calculate the square's area.
- No module importation is allowed.

### 4. Access and Update Private Attribute

- Extend the `Square` class with private attribute access and update methods:
  - Getter and setter for `size` attribute.
  - Validation for integer type and non-negativity.
- Public instance method `area()` is required.
- No module importation is allowed.

### 5. Printing a Square

- Extend the `Square` class to include a method `my_print()` to print the square with `#` character.
- Print an empty line if size is 0.
- No module importation is allowed.

### 6. Coordinates of a Square

- Extend the `Square` class with a private instance attribute `position`.
- Add getter and setter methods for `position`.
- Print the square with position adjustment using spaces.
- No module importation is allowed.

### 7. Singly Linked List

- Implement a singly linked list with classes `Node` and `SinglyLinkedList`.
- `Node` class defines a node with private instance attributes `data` and `next_node`.
- `SinglyLinkedList` class manages the linked list with insertion and printing methods.
- No module importation is allowed.

### 8. Print Square Instance

- Extend the `Square` class to enable printing with `print()` function.
- Printing behavior should be same as `my_print()` method.
- No module importation is allowed.

### 9. Compare 2 Squares

- Extend the `Square` class with comparators based on area.
- Implement `==`, `!=`, `>`, `>=`, `<`, and `<=` operators.
- No module importation is allowed.

### 10. ByteCode -> Python #5

- Write a Python class `MagicClass` with the same functionality as provided Python bytecode.
- Disassemble provided bytecode to understand the required functionality.
- No module importation is allowed.

