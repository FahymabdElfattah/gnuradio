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
/* BINDTOOL_HEADER_FILE(delay.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(70c56a7741afcf16e8584454a0520342)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/delay.h>
// pydoc.h is automatically generated in the build directory
#include <delay_pydoc.h>

void bind_delay(py::module& m)
{

    using delay = ::gr::blocks::delay;


    py::class_<delay, gr::block, gr::basic_block, std::shared_ptr<delay>>(
        m, "delay", D(delay))

        .def(
            py::init(&delay::make), py::arg("itemsize"), py::arg("delay"), D(delay, make))


        .def("dly", &delay::dly, D(delay, dly))


        .def("set_dly", &delay::set_dly, py::arg("d"), D(delay, set_dly))

        ;
}
