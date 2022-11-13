#include "TimerMapper.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <math.h>
using namespace std;
string TimerMapper::mapToStringTimer(long time)
{
    double hour = time / 3600; // seconds in hours
    double hour_int;
    double hour_fra = modf(hour, &hour_int);//split integer and decimal part of hours
    double minutes = hour_fra * 60; // dacimal hours in minutes
    double minutes_int;
    double minutes_fra = modf(minutes, &minutes_int); // split integer and decimal part of minutes
    double seconds = minutes_fra * 60; // decimal minutes in seconds
    stringstream ss;
    ss << ("%02lf", hour_int) << ":" << ("%02lf", minutes_int) << ":" << ("%02lf", seconds);
    string time_obs_def = ss.str();
    cout << time_obs_def << endl;
	return time_obs_def;
}
