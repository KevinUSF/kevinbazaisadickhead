/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 * File:   main.cpp
 * Author: ksantiago
 * Created on June 29, 2017, 3:19 PM
 */

#include <cstdlib>
#include "bottledwatercalc.h"
#include <iostream>
#include <vector> 

using namespace std;

int main(int argc, char** argv) 
{
    //temporary variables in program 
    //with same name as the function variables
    string name;
    int pop;
    double volume, length, circledtimes;
    //creates a vector to store the objects 
    //vector name is countries
    vector <bottledwatercalc> countries; 
    char continuevar, editvar;
    double totaltotal =0 ;
    
    do
    {
        // do not need getters, no need to return values
        // do not need setters, only for overriding previous variables
        cout << "enter name" << endl;
        cin >> name; 

        cout << "enter population" << endl;
        cin >> pop;

        cout << "enter times circled earth" << endl;
        cin >> circledtimes;

        cout << "enter bottle length" << endl;
        cin >> length;

        cout << "enter volume" << endl;
        cin >> volume;     
    
        // creates NEW object with values given 
        countries.push_back(bottledwatercalc(name,pop,circledtimes,length,volume));
        
        cout << "do you wish to edit your previous input?" << endl;
        cin >> editvar;
        
        if (editvar == 'y')
        {
            cout << "enter new name" << endl;
            cin >> name; 
            countries[countries.size() - 1].set_name(name);
        
            cout << "enter new population" << endl;
            cin >> pop; 
            countries[countries.size() - 1].set_population(pop);
            
            cout << "enter new times circled earth" << endl;
            cin >> circledtimes; 
            countries[countries.size() - 1].set_circledtimes(circledtimes);
            
            cout << "enter bottle length" << endl;
            cin >> length; 
            countries[countries.size() - 1].set_length(length);
            
            cout << "enter new volume" << endl;
            cin >> volume; 
            countries[countries.size() - 1].set_volume(volume);
        }
        
        cout << "do you want to add a new country" << endl;
        cin >> continuevar;
    }
    while(continuevar == 'y');
    
    for(int i = 0; i < countries.capacity(); i++)
   {
    //prints out objects information 1 object at a time
        cout << countries.at(i).get_name() << endl;
        cout << countries.at(i).get_population() << endl;
        cout << countries.at(i).get_circledtimes() << endl;
        cout << countries.at(i).get_length() << endl;
        cout << countries.at(i).get_volume() << endl;
        cout << "-------------" << endl;
   
      totaltotal += countries.at(i).totalbottles();
    }
    
    cout << "The total amount of bottles used is " << totaltotal << endl;
    return 0;
}