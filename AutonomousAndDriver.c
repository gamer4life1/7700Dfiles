#include "autonomous.h"
#include "driver.h"


task main()
{
		wait1Msec(5000);

		if(vexRT[BtnRDown])
			startTask(driver);
		else
			startTask(autonomous);
}
