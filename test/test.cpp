#include <gtest/gtest.h>
#include "pid.hpp"


TEST(ConstantKP, test1) {
	ControllerPID pid;
	pid.setKP(0.256);
	EXPECT_TRUE(pid.getKP() > 0.0);
}

TEST(outputPID, test2)
{
	ControllerPID pid;


	EXPECT_TRUE(0.0 <= pid.outputPID(1.0,0.5,0.001));
}

