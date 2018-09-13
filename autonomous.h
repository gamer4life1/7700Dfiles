void drive(int speed, char motorN, bool isDriveTrain, int timeS) {
	timeS *= 2;
	if(isDriveTrain) {
		motor[lMotor] = speed;
		motor[rMotor] = speed;
		wait1Msec(timeS);
		return;
	}
	switch(motorN) {
		case 'l':
			motor[lMotor] = speed;
			break;
		case 'r':
			motor[rMotor] = speed;
			break;
		case default:
			motor[lMotor] = 0;
			motor[rMotor] = 0;
			break;
	}
	wait1Msec(timeS);
}

task autonomous()
{
	eraseDisplay();
	displayString(1, "autonomous");
}
