#pragma once

//adds driver station and stuff
#include<Commands/Command.h>
#include<Commands/Scheduler.h>
#include<IterativeRobot.h>
#include<LiveWindow/LiveWindow.h>
#include<SmartDashBoard/SmartDashBoard.h>
#include<DriverStation.h>
#include<SmartDashboard/SendableChooser.h>

//adds subsystems
#include "subsystems/Turret.h"

clas Robot: public frc::IterativeRobot
{
public:
	//add subsystems as static variables to robot class
	static Turret turret;

private:
	frc::Command* autonomous;
	frc::SendableChooser<int> autochoice;
	frc::LiveWindow& m_lw = *frc::LiveWindow::GetInstance;

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
};
