#include <Python.h>
#include <listobject.h>

void print_python_list_info(PyObject *p)
{
    long int size = PyList_Size(p);
    int i;
    PyListObject *obj = (PyListObject *)p;

    printf("[*] Size of the Python List = %li\n", size);
    printf("[*] Allocated = %li\n", obj->allocated);

    for (i = 0; i < size; i++)
    {
        PyObject *item = obj->ob_item[i];
        printf("Element %i: %s\n", i, Py_TYPE(item)->tp_name);
    }
}

