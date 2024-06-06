/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(copy.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(2bcca715e65b5b54394fe4fe08d7afa0)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/copy.h>
// pydoc.h is automatically generated in the build directory
#include <copy_pydoc.h>

void bind_copy(py::module& m)
{

    using copy = ::gr::blocks::copy;


    py::class_<copy, gr::block, gr::basic_block, std::shared_ptr<copy>>(
        m, "copy", D(copy))

        .def(py::init(&copy::make), py::arg("itemsize"), D(copy, make))


        .def("set_enabled", &copy::set_enabled, py::arg("enable"), D(copy, set_enabled))


        .def("enabled", &copy::enabled, D(copy, enabled))

        ;
}
