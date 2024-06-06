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
/* BINDTOOL_HEADER_FILE(tagged_encoder.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(0b2137c423db35876f0cfafbe4ac7b85)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/tagged_encoder.h>
// pydoc.h is automatically generated in the build directory
#include <tagged_encoder_pydoc.h>

void bind_tagged_encoder(py::module& m)
{

    using tagged_encoder = ::gr::fec::tagged_encoder;


    py::class_<tagged_encoder,
               gr::tagged_stream_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<tagged_encoder>>(m, "tagged_encoder", D(tagged_encoder))

        .def(py::init(&tagged_encoder::make),
             py::arg("my_encoder"),
             py::arg("input_item_size"),
             py::arg("output_item_size"),
             py::arg("lengthtagname") = "packet_len",
             py::arg("mtu") = 1500,
             D(tagged_encoder, make))


        .def("work",
             &tagged_encoder::work,
             py::arg("noutput_items"),
             py::arg("ninput_items"),
             py::arg("input_items"),
             py::arg("output_items"),
             D(tagged_encoder, work))


        .def("calculate_output_stream_length",
             &tagged_encoder::calculate_output_stream_length,
             py::arg("ninput_items"),
             D(tagged_encoder, calculate_output_stream_length))

        ;
}
