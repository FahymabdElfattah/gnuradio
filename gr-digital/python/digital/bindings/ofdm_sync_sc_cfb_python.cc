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
/* BINDTOOL_HEADER_FILE(ofdm_sync_sc_cfb.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(8ec48d9c442f1699e3fa727ad27bfca1)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/digital/ofdm_sync_sc_cfb.h>
// pydoc.h is automatically generated in the build directory
#include <ofdm_sync_sc_cfb_pydoc.h>

void bind_ofdm_sync_sc_cfb(py::module& m)
{

    using ofdm_sync_sc_cfb = ::gr::digital::ofdm_sync_sc_cfb;


    py::class_<ofdm_sync_sc_cfb,
               gr::hier_block2,
               gr::basic_block,
               std::shared_ptr<ofdm_sync_sc_cfb>>(
        m, "ofdm_sync_sc_cfb", D(ofdm_sync_sc_cfb))

        .def(py::init(&ofdm_sync_sc_cfb::make),
             py::arg("fft_len"),
             py::arg("cp_len"),
             py::arg("use_even_carriers") = false,
             py::arg("threshold") = 0.90000000000000002,
             D(ofdm_sync_sc_cfb, make))


        .def("set_threshold",
             &ofdm_sync_sc_cfb::set_threshold,
             py::arg("threshold"),
             D(ofdm_sync_sc_cfb, set_threshold))


        .def("threshold", &ofdm_sync_sc_cfb::threshold, D(ofdm_sync_sc_cfb, threshold))

        ;
}
