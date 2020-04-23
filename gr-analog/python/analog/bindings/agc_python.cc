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

#include <gnuradio/analog/agc.h>
// pydoc.h is automatically generated in the build directory
#include <agc_pydoc.h>

void bind_agc(py::module& m)
{


    py::module m_kernel = m.def_submodule("kernel");

    using agc_cc = ::gr::analog::kernel::agc_cc;
    using agc_ff = ::gr::analog::kernel::agc_ff;


    py::class_<agc_cc, std::shared_ptr<agc_cc>>(m_kernel, "agc_cc", D(kernel, agc_cc))

        .def(py::init<float, float, float, float>(),
             py::arg("rate") = 1.0E-4,
             py::arg("reference") = 1.,
             py::arg("gain") = 1.,
             py::arg("max_gain") = 0.,
             D(kernel, agc_cc, agc_cc, 0))
        .def(py::init<gr::analog::kernel::agc_cc const&>(),
             py::arg("arg0"),
             D(kernel, agc_cc, agc_cc, 1))


        .def("rate", &agc_cc::rate, D(kernel, agc_cc, rate))


        .def("reference", &agc_cc::reference, D(kernel, agc_cc, reference))


        .def("gain", &agc_cc::gain, D(kernel, agc_cc, gain))


        .def("max_gain", &agc_cc::max_gain, D(kernel, agc_cc, max_gain))


        .def("set_rate", &agc_cc::set_rate, py::arg("rate"), D(kernel, agc_cc, set_rate))


        .def("set_reference",
             &agc_cc::set_reference,
             py::arg("reference"),
             D(kernel, agc_cc, set_reference))


        .def("set_gain", &agc_cc::set_gain, py::arg("gain"), D(kernel, agc_cc, set_gain))


        .def("set_max_gain",
             &agc_cc::set_max_gain,
             py::arg("max_gain"),
             D(kernel, agc_cc, set_max_gain))


        .def("scale", &agc_cc::scale, py::arg("input"), D(kernel, agc_cc, scale))


        .def("scaleN",
             &agc_cc::scaleN,
             py::arg("output"),
             py::arg("input"),
             py::arg("n"),
             D(kernel, agc_cc, scaleN))

        ;


    py::class_<agc_ff, std::shared_ptr<agc_ff>>(m_kernel, "agc_ff", D(kernel, agc_ff))

        .def(py::init<float, float, float, float>(),
             py::arg("rate") = 1.0E-4,
             py::arg("reference") = 1.,
             py::arg("gain") = 1.,
             py::arg("max_gain") = 0.,
             D(kernel, agc_ff, agc_ff, 0))
        .def(py::init<gr::analog::kernel::agc_ff const&>(),
             py::arg("arg0"),
             D(kernel, agc_ff, agc_ff, 1))


        .def("rate", &agc_ff::rate, D(kernel, agc_ff, rate))


        .def("reference", &agc_ff::reference, D(kernel, agc_ff, reference))


        .def("gain", &agc_ff::gain, D(kernel, agc_ff, gain))


        .def("max_gain", &agc_ff::max_gain, D(kernel, agc_ff, max_gain))


        .def("set_rate", &agc_ff::set_rate, py::arg("rate"), D(kernel, agc_ff, set_rate))


        .def("set_reference",
             &agc_ff::set_reference,
             py::arg("reference"),
             D(kernel, agc_ff, set_reference))


        .def("set_gain", &agc_ff::set_gain, py::arg("gain"), D(kernel, agc_ff, set_gain))


        .def("set_max_gain",
             &agc_ff::set_max_gain,
             py::arg("max_gain"),
             D(kernel, agc_ff, set_max_gain))


        .def("scale", &agc_ff::scale, py::arg("input"), D(kernel, agc_ff, scale))


        .def("scaleN",
             &agc_ff::scaleN,
             py::arg("output"),
             py::arg("input"),
             py::arg("n"),
             D(kernel, agc_ff, scaleN))

        ;
}
