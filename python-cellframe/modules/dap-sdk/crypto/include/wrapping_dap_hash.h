/*
 * Authors:
 * Alexey Stratulat <alexey.stratulat@demlabs.net>
 * DeM Labs Inc.   https://demlabs.net
 * CellFrame       https://cellframe.net
 * Sources         https://gitlab.demlabs.net/cellframe
 * Copyright  (c) 2017-2020
 * All rights reserved.

 This file is part of DAP (Deus Applications Prototypes) the open source project

    DAP (Deus Applicaions Prototypes) is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    DAP is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with any DAP based project.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once
#include <Python.h>
#include "dap_hash.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PyDapHashType{
    PyObject_HEAD
    dap_hash_type_t hash_type;
}PyDapHashTypeObject;

PyObject *DAP_HASH_TYPE_KECCAK_PY();
PyObject *DAP_HASH_TYPE_SLOW_0_PY();

/* Chain hash fast */
typedef struct PyDapHashFast{
    PyObject_HEAD
    dap_chain_hash_fast_t *hash_fast;
}PyDapHashFastObject;

PyObject *dap_chain_str_to_hash_fast_py(PyObject *self, PyObject *args);
PyObject *dap_hash_fast_py(PyObject *self, PyObject *args);
PyObject *dap_hash_fast_compare_py(PyObject *self, PyObject *args);
PyObject *dap_hash_fast_is_blank_py(PyObject *self, PyObject *args);
PyObject *dap_chain_hash_fast_to_str_py(PyObject *self, PyObject *args);
PyObject *dap_chain_hash_fast_to_str_new_py(PyObject *self, PyObject *args);
PyObject *wrapping_dap_hash_to_str(PyObject *self);

extern PyTypeObject DapHashTypeObject_DapChainHashTypeObjectType;
extern PyTypeObject DapHashFastObject_DapHashFastObjectType;

static bool PyDapHashFast_Check(PyObject *a_obj){
    return PyObject_TypeCheck(a_obj, &DapHashFastObject_DapHashFastObjectType);
}

#ifdef __cplusplus
}
#endif
