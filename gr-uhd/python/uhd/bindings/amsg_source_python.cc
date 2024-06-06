/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/uhd/amsg_source.h>
// pydoc.h is automatically generated in the build directory
#include <amsg_source_pydoc.h>

void bind_amsg_source(py::module& m)
{

    using amsg_source = ::gr::uhd::amsg_source;


    py::class_<amsg_source, std::shared_ptr<amsg_source>>(
        m, "amsg_source", D(amsg_source))

        .def(py::init(&amsg_source::make),
             py::arg("device_addr"),
             py::arg("msgq"),
             D(amsg_source, make))


        .def_static("msg_to_async_metadata_t",
                    &amsg_source::msg_to_async_metadata_t,
                    py::arg("msg"),
                    D(amsg_source, msg_to_async_metadata_t))

        ;
}
