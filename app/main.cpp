/*
* @aurthor: Vontrelle Collins
* @file: app/main.cpp
*/

#include <iostream>
#include "pid.hpp"

int main() {

    ControllerPID controller;
    controller.setKI(0.5);
    controller.setKI(0.25);
    controller.setKD(0.01);
    //controller.setKI(1);
    //controller.setKI(0.5);
    //controller.setKD(0.0001);

//
controller.outputPID(6.0,0.5,0.1);
//
    return 0;
}
