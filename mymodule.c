#define PY_SSIZE_T_CLEAN
#include <Python.h>

static PyObject *SpamError;

static PyObject *
myPrint(PyObject * self, PyObject * args)
{
    
    return Py_BuildValue("[i,i]", 123, 456);
}

static PyMethodDef myMethods[] = {
    {"my",  myPrint, METH_VARARGS,
     "Execute a shell command."},
    {NULL, NULL, 0, NULL}        /* Sentinel */
};

static struct PyModuleDef mymodule = {
    PyModuleDef_HEAD_INIT,
    "my",   /* name of module */
    NULL, /* module documentation, may be NULL */
    -1,       /* size of per-interpreter state of the module,
                 or -1 if the module keeps state in global variables. */
    myMethods
};

PyMODINIT_FUNC
PyInit_my(void)
{
    return PyModule_Create(&mymodule);
}