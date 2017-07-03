// Copyright Benoit Blanchon 2014-2017
// MIT License
//
// Arduino JSON library
// https://bblanchon.github.io/ArduinoJson/
// If you like this project, please add a star!

#pragma once

namespace ArduinoJson {
namespace Polyfills {

template <int N>
inline double constPow10() {
  return constPow10<N / 2>() * constPow10<N / 2>() * constPow10<N / 2>();
}
template <>
inline double constPow10<-1>() {
  return 1e-1;
}
template <>
inline double constPow10<0>() {
  return 1e0;
}
template <>
inline double constPow10<1>() {
  return 1e1;
}
}
}
