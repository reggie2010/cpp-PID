/*
* @aurthor: Vontrelle Collins
* @file: app/pid.cpp
*/

#include <iostream>
#include "pid.hpp"

ControllerPID::ControllerPID() : mkp(0.0), mki(0.0), mkd(0.0) {
	/*
	* Constructor for PID Controller class
	*/

	std::cout << "PID controller constructed" << std::endl;
}

ControllerPID::~ControllerPID() {
	/*
	* Destructor for PID Controller class
	*/

	std::cout << "Destroying Controller" << std::endl;
}

double ControllerPID::getKP() { return mkp; }
double ControllerPID::getKI() { return mki; }
double ControllerPID::getKD() { return mkd; }
void ControllerPID::setKP(double kp) { mkp=kp; }
void ControllerPID::setKI(double ki) { mki=ki; }
void ControllerPID::setKD(double kd) { mkd=kd; }

double ControllerPID::outputPID(double refSig, double feedbackSig, double timeDelta) {
	/*
	* Computs the controlled PID output
	* Calculates new velocity using reference and feedback signals.
	* timeDelta is the change in time used in calculating integral.
	*/

	double error {refSig - feedbackSig};

	return 0.0;
}