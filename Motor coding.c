#pragma config(Sensor, in1,    Front,          sensorLineFollower)
#pragma config(Sensor, in2,    Back,           sensorLineFollower)
#pragma config(Sensor, dgtl1,  button,         sensorTouch)
#pragma config(Sensor, dgtl2,  button2,        sensorTouch)
#pragma config(Motor,  port2,           backright,     tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port3,           topleft,       tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port4,           topright,      tmotorVex269_MC29, openLoop)
#pragma config(Motor,  port5,           backleft,      tmotorVex269_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while(1==1)
{
	if(SensorValue(button)==1)
{
   startMotor(topright, 100);
}
startMotor(topleft, 100);
{
startMotor(backleft, 100);
}
startMotor(backright, 100);
// above is the autonomus //
}

if(SensorValue(button) == false)
	motor(topleft)= vexRT[Ch3];
  motor(topright)= vexRT[Ch3];
  motor(backright)= vexRT[Ch2];
  motor(backleft)= vexRT[Ch2];
  // above is the teleop//
}





