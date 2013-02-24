#pragma config(Sensor, S1,     touchSensor,              sensorTouch)
#pragma config(Sensor, S2,     compassSensor,            sensorVirtualCompass)
#pragma config(Sensor, S3,     lightSensor,              sensorLightActive)
#pragma config(Sensor, S4,     sonarSensor,              sensorSONAR)
#pragma config(Motor,  motorA,          gripperMotor,       tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorB,          rightMotor,         tmotorNormal, PIDControl, encoder)
#pragma config(Motor,  motorC,          leftMotor,          tmotorNormal, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
// This is for the NXT model, not TETRIX

/************************************\
|*  ROBOTC Virtual World            *|
|*                                  *|
|*  DO NOT OVERWRITE THIS FILE      *|
|*  MAKE SURE TO "SAVE AS" INSTEAD  *|
\************************************/



	//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main()
{
	wait1Msec(2000);						// Robot waits for 2000 milliseconds before executing program

	// Move forward at full power for 3 seconds
	motor[rightMotor] = 100;		  // Motor on motorB is run at full (100) power forward
	motor[leftMotor]  = 100;		  // Motor on motorC is run at full (100) power forward
	wait1Msec(4400);			        // Robot runs previous code for 3000 milliseconds before moving on

	motor[rightMotor] = -100;		  // Motor on motorB is run at full (100) power forward
	motor[leftMotor]  = 100;		  // Motor on motorC is run at full (100) power forward
	wait1Msec(500);			        // Robot runs previous code for 3000 milliseconds before moving on
}												        // Program ends, and the robot stops
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
