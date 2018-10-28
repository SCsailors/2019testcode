#pragma once

#include <Commands/Subsystem.h>
#include <Spark.h>//use motor controllers we're using

//creates turret class
Class Turret : public frc::Subsystem
{
public:
	Turret();
	void InitDefaultCommand() override;
	void Turret()
private:

}
