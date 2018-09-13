//function driveStraight(int time)
#include "autonomous.h"
//void drive(int speed, char motorN, bool isDriveTrain, int timeS) {
//	timeS *= 2;
//	if(isDriveTrain) {
//		motor[lMotor] = speed;
//		motor[rMotor] = speed;
//		wait1Msec(timeS);
//		return;
//	}
//	switch(motorN) {
//		case 'l':
//			motor[lMotor] = speed;
//		case 'r':
//			motor[rMotor] = speed;
//		case default:
//			motor[lMotor] = 0;
//			motor[rMotor] = 0;
//	}
//	wait1Msec(timeS);
//}

void hang() {
	displayString(2, "Hanging...");

}

void calculateControls() {
	if(vexRT[ChA])
		drive(vexRT[ChA], 'l', false, 1200);
	else if(vexRT[ChD])
		drive(vexRT[ChD], 'r', false, 1200);
	else if(vexRT[BtnFUp])
		hang();
}

task driver()
{
	eraseDisplay();
	displayString(1, "Driver mode. Press Fdown button to stop.");


}

task checkStop()
{
	while (vexRT[BtnFDown]) {};
	stopAllTasks();
}
