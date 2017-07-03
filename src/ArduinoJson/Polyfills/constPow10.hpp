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
  return constPow10<N / 2>() * constPow10<N / 2>() * constPow10<N % 2>();
}
template <>
inline double constPow10<-32>() {
  return 1e-32;
}
template <>
inline double constPow10<-16>() {
  return 1e-16;
}
template <>
inline double constPow10<-8>() {
  return 1e-8;
}
template <>
inline double constPow10<-4>() {
  return 1e-4;
}
template <>
inline double constPow10<-3>() {
  return 1e-3;
}
template <>
inline double constPow10<-2>() {
  return 1e-2;
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
template <>
inline double constPow10<2>() {
  return 1e2;
}
template <>
inline double constPow10<4>() {
  return 1e4;
}
template <>
inline double constPow10<8>() {
  return 1e8;
}
template <>
inline double constPow10<16>() {
  return 1e16;
}
template <>
inline double constPow10<32>() {
  return 1e32;
}
}
}
