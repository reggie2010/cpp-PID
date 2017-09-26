[![Build Status](https://travis-ci.org/reggie2010/cpp-PID.svg?branch=master)](https://travis-ci.org/reggie2010/cpp-PID)
[![Coverage Status](https://coveralls.io/repos/github/reggie2010/cpp-PID/badge.svg?branch=master)](https://coveralls.io/github/reggie2010/cpp-PID?branch=master)
---

Implements a PID Controller

## Standard install via command-line
```
git clone --recursive https://github.com/reggie2010/cpp-PID.git
cd <path to repository>
mkdir build
cd build
cmake ..
make

Notes by Senthil Arul
ToDo: 
1) The test cases does not test for the convergance of the new velocity with to set point.
2) Would be better to have a threshold limit to assert Convergance of set point and new velocity.

Notes: 
1) The Kd (Derivative constant) value is to large so derivative term in PID solution overpowers the PID output (hence Kd value modfied in main.cpp)
  
