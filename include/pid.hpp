/*
* @aurthor: Vontrelle Collins
* @file: include/pid.hpp
*/

#ifndef PID_H
#define PID_H

class ControllerPID {
  public:
  	ControllerPID();
  	~ControllerPID();
  	double getKP();
  	double getKI();
  	double getKD();
  	void setKP(double kp);
  	void setKI(double ki);
  	void setKD(double kd);
  	double outputPID(double refSig, double feedbackSig, double timeDelta);

  private:
  	double mkp; // Propertional Constant
  	double mki; // Integral Constant
  	double mkd; // Derivative Constant
};

#endif