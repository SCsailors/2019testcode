#pragma once

public class Units()
{
public:
	static double rpm_to_rads_per_sec(double rpm);

	static double rads_per_sec_to_rpm(double rads_per_sec);

	static double inches_to_meters(double inches);

	static double meters_to_inches(double meters);

	static double feet_to_meters(double feet);

	static double meters_to_feet(double meters);

	static double degrees_to_radians(double degrees);

	static double radians_to_degrees(double radians);

	static double ticks_to_radians(double ticks, double ticks_per_rev);

	static double ticks_to_degrees(double ticks, double ticks_per_rev);

	static double radians_to_ticks(double radians, double ticks_per_rev);

	static double degrees_to_ticks(double degrees, double ticks_per_rev);
};
