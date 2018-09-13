#pragma config(Sensor, port2,  gyro,           sensorVexIQ_Gyro)
#pragma config(Motor,  motor1,          lMotor,        tmotorVexIQ, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motor6,          rMotor,        tmotorVexIQ, PIDControl, driveRight, encoder)
// Tell rest of team these motors
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//#include "motors.h"
#include "autonomous.h"
#include "driver.h"


task main()
{
	startTask(checkStop);
	wait1Msec(5000);

	if(vexRT[BtnRDown])
		startTask(driver);
	else
		startTask(autonomous);
}
