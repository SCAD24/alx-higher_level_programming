#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - Prints information about Python bytes objects.
 *
 * @p: Python Object (assumed to be a bytes object)
 */
void print_python_bytes(PyObject *p)
{
    char *string;
    long int size, i, limit;

    // Display header for bytes object information
    printf("[.] bytes object info\n");

    // Check if the given object is a valid PyBytesObject
    if (!PyBytes_Check(p))
    {
        printf("  [ERROR] Invalid Bytes Object\n");
        return;
    }

    // Extract size and string from PyBytesObject
    size = ((PyVarObject *)(p))->ob_size;
    string = ((PyBytesObject *)p)->ob_sval;

    // Display size and trying string information
    printf("  size: %ld\n", size);
    printf("  trying string: %s\n", string);

    // Determine the limit for displaying bytes
    if (size >= 10)
        limit = 10;
    else
        limit = size + 1;

    // Display the first 'limit' bytes in hexadecimal format
    printf("  first %ld bytes:", limit);
    for (i = 0; i < limit; i++)
        printf(" %02x", string[i]);

    printf("\n");
}

/**
 * print_python_list - Prints information about Python lists.
 *
 * @p: Python Object (assumed to be a list object)
 */
void print_python_list(PyObject *p)
{
    long int size, i;
    PyObject *obj;

    // Extract size from PyListObject
    size = ((PyVarObject *)(p))->ob_size;

    // Display header for Python list information
    printf("[*] Python list info\n");
    printf("[*] Size of the Python List = %ld\n", size);
    printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

    // Iterate through the elements of the list
    for (i = 0; i < size; i++)
    {
        // Get the i-th element from the list
        obj = PyList_GetItem(p, i);

        // Display element index and its type name
        printf("Element %ld: %s\n", i, ((obj)->ob_type)->tp_name);

        // If the element is a bytes object, call print_python_bytes
        if (PyBytes_Check(obj))
            print_python_bytes(obj);
    }
}

