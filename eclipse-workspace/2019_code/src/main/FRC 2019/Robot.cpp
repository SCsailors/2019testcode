#include "Robot.h"
#include <CameraServer.h>
#include <iostream>

Turret Robot::turret;

void Robot::RobotInit() {
	CameraServer::GetInstance()->StartAutomaticCapture();
}


void Robot::AutonomousInit(){

}

void Robot::TeleopInit(){
	frc::Scheduler::GetInstance()->Run();
	frc::SmartDashboard::PutNumber("Time Remaining",DriverStation::GetInstance().GetMatchTime());
}

void Robot::TestPeriodic(){}


START_ROBOT_CLASS(Robot)
