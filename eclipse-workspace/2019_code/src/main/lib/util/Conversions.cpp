#include "Conversions.h"
#include "cmath"

static double Units::rpm_to_rads_per_sec(double rpm)
{
	return rpm/60*2*math.pi;
}

static double Units::rads_per_sec_to_rpm(double rads_per_sec)
{
	return rads_per_sec*60/(2*math.pi);
}

static double Units::inches_to_meters(double inches)
{
	return inches*.0254;
}

static double Units::meters_to_inches(double meters)
{
	return meters/.0254;
}

static double Units::feet_to_meters(double feet)
{
	return inches_to_meters(feet)/12;
}

static double Units::meters_to_feet(double meters;)
{
	return meters_to_inches(meters)/12;
}

static double Units::degrees_to_radians(double degrees);
{
	return degrees*math.pi/180;
}

static double Units::radians_to_degrees(double radians)
{
	return radians*180/math.pi;
}

static double Units::ticks_to_radians(double ticks, double ticks_per_rev)
{
	return ticks/ticks_per_rev*2*math.pi;
}

static double Units::ticks_to_degrees(double ticks, double ticks_per_rev)
{
	return ticks/ticks_per_rev*360;
}

static double Units::radians_to_ticks(double radians, double ticks_per_rev)
{
	return radians/(2*math.pi)*ticks_per_rev;
}

class Units:static double degrees_to_ticks(double degrees, double ticks_per_rev)
{
	return degrees/360*ticks_per_rev;
}
