#ifndef _WRAPPING_DAP_CHAIN_NET_STATE_
#define _WRAPPING_DAP_CHAIN_NET_STATE_
#include <Python.h>
#include "dap_chain_net.h"

#ifdef __cplusplus
extern "C"{
#endif

typedef struct PyDapChainNetState{
    PyObject_HEAD
    dap_chain_net_state_t state;
}PyDapChainNetStateObject;

PyObject *NET_STATE_OFFLINE_PY(void);
PyObject *NET_STATE_LINKS_PREPARE_PY(void);
PyObject *NET_STATE_LINKS_CONNECTING_PY(void);
PyObject *NET_STATE_LINKS_ESTABLISHED_PY(void);
PyObject *NET_STATE_ADDR_REQUEST_PY(void); // Waiting for address assign
PyObject *NET_STATE_ONLINE_PY(void);
PyObject *NET_STATE_SYNC_GDB_PY(void);
PyObject *NET_STATE_SYNC_CHAINS_PY(void);

static PyMethodDef PyDapChainNetStateMethods[] = {
    {"NET_STATE_OFFLINE", (PyCFunction)NET_STATE_OFFLINE_PY, METH_NOARGS | METH_STATIC, ""},
    {"NET_STATE_LINKS_PREPARE", (PyCFunction)NET_STATE_LINKS_PREPARE_PY, METH_NOARGS | METH_STATIC, ""},
    {"NET_STATE_LINKS_CONNECTING", (PyCFunction)NET_STATE_LINKS_CONNECTING_PY, METH_NOARGS | METH_STATIC, ""},
    {"NET_STATE_LINKS_ESTABLISHED", (PyCFunction)NET_STATE_LINKS_ESTABLISHED_PY, METH_NOARGS | METH_STATIC, ""},
    {"NET_STATE_ADDR_REQUEST", (PyCFunction)NET_STATE_ADDR_REQUEST_PY, METH_NOARGS | METH_STATIC, ""},
    {"NET_STATE_SYNC_GDB", (PyCFunction)NET_STATE_SYNC_GDB_PY, METH_NOARGS | METH_STATIC, ""},
    {"NET_STATE_SYNC_CHAINS", (PyCFunction)NET_STATE_SYNC_CHAINS_PY, METH_NOARGS | METH_STATIC, ""},
    /*{"csAdd", (PyCFunction)dap_chain_cs_add_py, METH_VARARGS, ""},
    {"csCreate", (PyCFunction)dap_chain_cs_create_py, METH_VARARGS, ""},
    {"classAdd", (PyCFunction)dap_chain_class_add_py, METH_VARARGS, ""},
    {"classCreate", (PyCFunction)dap_chain_class_create_py, METH_VARARGS, ""},*/
    {NULL, NULL, 0, NULL}
};

static PyTypeObject DapChainNetStateObject_DapChainNetStateObjectType = {
    PyVarObject_HEAD_INIT(NULL, 0)
    "CellFrame.ChainNetState",        /* tp_name */
    sizeof(PyDapChainNetStateObject), /* tp_basicsize */
    0,                                /* tp_itemsize */
    0,                                /* tp_dealloc */
    0,                                /* tp_print */
    0,                                /* tp_getattr */
    0,                                /* tp_setattr */
    0,                                /* tp_reserved */
    0,                                /* tp_repr */
    0,                                /* tp_as_number */
    0,                                /* tp_as_sequence */
    0,                                /* tp_as_mapping */
    0,                                /* tp_hash  */
    0,                                /* tp_call */
    0,                                /* tp_str */
    0,                                /* tp_getattro */
    0,                                /* tp_setattro */
    0,                                /* tp_as_buffer */
    Py_TPFLAGS_DEFAULT |
        Py_TPFLAGS_BASETYPE,          /* tp_flags */
    "Chain net states object",               /* tp_doc */
    0,		                          /* tp_traverse */
    0,		                          /* tp_clear */
    0,		                          /* tp_richcompare */
    0,                                /* tp_weaklistoffset */
    0,		                          /* tp_iter */
    0,		                          /* tp_iternext */
    PyDapChainNetStateMethods,        /* tp_methods */
    0,                                /* tp_members */
    0,                                /* tp_getset */
    0,                                /* tp_base */
    0,                                /* tp_dict */
    0,                                /* tp_descr_get */
    0,                                /* tp_descr_set */
    0,                                /* tp_dictoffset */
    0,                                /* tp_init */
    0,                                /* tp_alloc */
    PyType_GenericNew,                /* tp_new */
};

#ifdef __cplusplus
}
#endif

#endif // _WRAPPING_DAP_CHAIN_NET_STATE_
