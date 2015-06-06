/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name: JOSEPH,JOHN EBIM
 * Reg No: 45644051DB
 * Department: STATISTICS
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    cout<<endl;                                // first thing... new..... paragraph
    cout<<"Enter first name  ";                // prints instruction on what data to input
    getline(cin,firstName);                   // prompt for firstName
    cout<<"Enter Last name  ";                // prints instruction on what data to input
    getline(cin,lastName);                    // prompt for lastName
    cout<<"Enter your Gender that is, male or female?  ";  // prints instruction on what data to input
    getline(cin,gender);                      // prompt for gender
    cout<<"Enter your birth month  ";         // prints instruction on what data to input
    cin>>month;                               // prompt for  birth month
    cout<<"Enter your birth day  ";           // prints instruction on what data to input
    cin>>day;                                 // prompt for birth day
    cout<<"Enter your birth year  ";          // prints instruction on what data to input
    cin>>year;                                // prompt for birth year
    cout<<"Enter current year  ";             // prints instruction on what data to input
    cin>>currentYear;                         // prompt for current year    
    cout<<"Enter current day  ";              // prints instruction on what data to input
    cin>>currentDay;                          // prompt for birth year
    cout<<"Enter current Month  ";            // prints instruction on what data to input
    cin>>currentMonth;                        // prompt for birth year
    cout<<"Enter your weight  ";              // prints instruction on what data to input
    cin>>weight;                              // prompt for birth year
    cout<<"Enter your height  ";              // prints instruction on what data to input
    cin>>height;                              // prompt for birth year
    cout<<endl;                               // new paragraph

    
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
   HealthProfile healthProfile( firstName, lastName, gender, month, day, year, weight, height, currentMonth, currentDay, currentYear );
   
   
   // Print information from the object - by calling getInformation() function
    
    healthProfile.getInformation();
    system("PAUSE");     // Pause a while
    return 0;
    
    
}
