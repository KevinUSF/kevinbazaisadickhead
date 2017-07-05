#include <iostream>
#include "bottledwatercalc.h"
using namespace std;

bottledwatercalc::bottledwatercalc
(string name, int pop, double circledtimes, double length, double volume)
{
    this->name = name;
    this->pop = pop;
    this->circledtimes = circledtimes;
    this->length = length;
    this->volume = volume;
}

void bottledwatercalc::set_name(string name)
{
   this->name = name;
}
string bottledwatercalc::get_name()
{
    return name;
}

void bottledwatercalc::set_population(int pop)
{
    this->pop = pop;
}
int bottledwatercalc::get_population()
{
    return pop;
}

void bottledwatercalc::set_circledtimes(double circledtimes)
{
    this->circledtimes = circledtimes;
}
double bottledwatercalc::get_circledtimes()
{
    return circledtimes;
}

void bottledwatercalc::set_length(double length)
{
    this->length = length;
}
double bottledwatercalc::get_length()
{
    return length;
}

void bottledwatercalc::set_volume(double volume)
{
    this->volume = volume;
}
double bottledwatercalc::get_volume()
{
    return volume;
}

double bottledwatercalc::totalbottles()
{
    double total = this->get_circledtimes()* 24902 * 63360
              /this->get_length();
    return total;
}

double bottledwatercalc::waterper() //not used
{
    double waterper = this->totalbottles()/this->get_population();
    
    return waterper;
}