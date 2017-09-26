/*
* @aurthor: Vontrelle Collins
* @file: app/pid.cpp
*/

#include <iostream>
#include "pid.hpp"
#include <cmath>
#include <chrono>
#include <thread>

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
//
    double totalError =0;
    double previousError = 0;
    double newVelocity = 0;
    double kp = getKP();
    double ki = getKI();
    double kd = getKD();
    //std::cout << kp <<" "<< ki<<" "<<kd<<"\t";
    while ( std::abs(error) > 0.01 ) {
    error = refSig - feedbackSig;
    //std::cout << "error: "<< error <<std::endl;
    totalError += error;
    //std::cout << kp * error << " "<< ki * totalError *timeDelta << " "<< ((error - previousError)/timeDelta) * kd << std::endl;
    double newVel = kp * error + ki * totalError *timeDelta + ((error - previousError)/timeDelta) * kd;
    previousError = error;
    newVelocity = (newVel > 10) ? 10 : newVel < -10 ? -10 : newVel;
    
//newVelocity = newVel;    
feedbackSig = newVelocity;
    //std::this_thread::sleep_for (std::chrono::seconds(1));
}
//      
        std::cout<<error<<" "<<newVelocity<<std::endl;
	return newVelocity;
}
