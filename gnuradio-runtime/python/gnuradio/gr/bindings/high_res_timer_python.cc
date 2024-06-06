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
/* BINDTOOL_HEADER_FILE(high_res_timer.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(3992258b56f41917eef9df090ef2d185)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/high_res_timer.h>
// pydoc.h is automatically generated in the build directory
#include <high_res_timer_pydoc.h>

void bind_high_res_timer(py::module& m)
{


    m.def("high_res_timer_now", &::gr::high_res_timer_now, D(high_res_timer_now));


    m.def("high_res_timer_now_perfmon",
          &::gr::high_res_timer_now_perfmon,
          D(high_res_timer_now_perfmon));


    m.def("high_res_timer_tps", &::gr::high_res_timer_tps, D(high_res_timer_tps));


    m.def("high_res_timer_epoch", &::gr::high_res_timer_epoch, D(high_res_timer_epoch));
}
