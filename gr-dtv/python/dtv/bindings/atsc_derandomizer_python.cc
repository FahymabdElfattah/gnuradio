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
/* BINDTOOL_GEN_AUTOMATIC(1)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(atsc_derandomizer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b2794152d0b34ea575b8797f241dbe9f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/atsc_derandomizer.h>
// pydoc.h is automatically generated in the build directory
#include <atsc_derandomizer_pydoc.h>

void bind_atsc_derandomizer(py::module& m)
{

    using atsc_derandomizer = ::gr::dtv::atsc_derandomizer;


    py::class_<atsc_derandomizer,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<atsc_derandomizer>>(
        m, "atsc_derandomizer", D(atsc_derandomizer))

        .def(py::init(&atsc_derandomizer::make), D(atsc_derandomizer, make))


        ;
}
