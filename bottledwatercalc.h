#ifndef bottledwatercalc_H
#define bottledwatercalc_H
#include <iostream>
using namespace std;

class bottledwatercalc
{
    public:
        bottledwatercalc(string name, int pop, 
        double circledtimes, double length, 
                double volume);
        
        // getters & setters for the object
        void set_name(string name);
        string get_name();
        
        void set_population(int population);
        int get_population();
        
        void set_circledtimes(double circledtimes);
        double get_circledtimes();
        
        void set_length(double length);
        double get_length();
        
        void set_volume(double volume);
        double get_volume();
       
        // functions using the objects data
        // not part of the actual object 
        double totalbottles();
        double waterper(); //not used
        

    private:
    // only for variables of the object!
        string name;
        int pop;
        double circledtimes;
        double length;
        double volume;
};
#endif

//63360 inches to mile
//24902 miles in lap
//128 oz in gallon
