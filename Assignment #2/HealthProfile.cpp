/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name: JOSEPH,JOHN EBIM
 * Reg No: 45644051DB
 * Department: STATISTICS
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include <math.h>           // uses C++ math class
#include <iomanip>          // use iomanip class to format output text
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int day, int year, int weight, double height, int currentDay,
                             int currentMonth, int currentYear)
{
    setFirstName( firstName );      // call set function to initialize firstName
    setLastName( lastName );        // call set function to initialize lastName
    setGender( gender );            // call set function to initialize gender
    setMonth( month );              // call set function to initialize month
    setDay( day );                  // call set function to initialize day
    setYear( year );                // call set function to initialize year
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
    setAge( currentYear, currentMonth, currentDay, year, month, day );  // call set function to calculate age
}

// function to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(17) << getFirstName() << endl;
    cout << "Last Name: " << setw(19) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}


/* 
 * 
 * IMPLEMENTATION OF ALL THE GET FUNCTIONS IN CLASS HealthProfile except 
 * constructor and getInformation function which have been provided already
 *
*/

/*
 * implementation of getBMI function
 * the function calculates and returns the Body Mass Index ( BMI ) of a patient given the following... 
 * weight in pounds of a patient and height in inches of a patient
 * 
 */
double HealthProfile::getBMI()
{
       double myBMI;                          // Declaration of temporary local variable to store BMI value
       myBMI = weight / pow(height,2);       // Calculates BMI and store the result in myBMI
       return myBMI;                        // return the value of myBMI
}                                          // End of getBMI function


/* 
 * implementation of getMaximumHeartRate function
 * this function calculates and reuturns the maximum heart rate of a patient given the age 
 * of the patient
 * 
 */
int HealthProfile::getMaximumHeartRate()
{
    int maxHeartRate;   // Declaration of temporary local variable for storage of maximum heart rate
    maxHeartRate= 220 - getAge();  // Calculation the maxHeartRate
    return maxHeartRate;      // return the value of maxHeart rate
}   // End of function getMaximumHeattRate


/* implementation of getTargetHeartRate function
 * the function calculates and returns the Target Heart Rate of a patient given the  
 * maximum heart rate of the patients
 * 
 */
double HealthProfile::getTargetHeartRate()
{
       const double percent = 85 / 100;    // Definition of temporary constant identifier for storage of the constant 85%
       double targetHeartRate;             // Another temporary variable to store the target heart Rate
       targetHeartRate = 50 - percent * getMaximumHeartRate();   // calculation of the target Heart Rate
       return targetHeartRate;            // return the value of target heart rate
}  // End of function getTargetHeartRate    


/* implementation of getFirstName
 * the function returns the first name of a patient
 */
string HealthProfile::getFirstName()
{
       return firstName;
} // end of function getFirstName 


/* implementation of getLastName
 * the function returns the last name of a patient
 */
string HealthProfile::getLastName()
{
       return lastName;
} // end of function getLastName


/* implementation of getGender
 * the function returns the gender of a patient. that is, whether male or female
 */
string HealthProfile::getGender()
{
       return gender;
} // end function getGender


/* implementation of getMonth
 * the function returns the month of birth of a patient
 */
int HealthProfile::getMonth()
{

       return month;
} // end function getMonth


/* implementation of getDay
 * the function returns the day of birth of a patient
 */
int HealthProfile::getDay()
{
       return day;
} // end function getDay


/* implementation of getYear
 * the function returns the year of birth of a patient
 */
int HealthProfile::getYear()
{
       return year;
} // end function getYear


/* implementation of getHeight
 * the function returns the height ( in meters ) of a patient
 */
double HealthProfile::getHeight()
{
       return height;
} // end function getHeight


/* implementation of getWeight
 * the function returns the weight ( in kilograms ) of a patient
 */
int HealthProfile::getWeight()
{
       return weight;
} // end function getWeight


/* implementation of getAge
 * the function returns the age (in years) of a patient
 */
int HealthProfile::getAge( )
{
    return age;    
    // end function getAge
}



/*
 *
 *   IMPLEMENTATION OF ALL THE SET FUNCTIONS IN CLASS HealthProfile
 *
*/


/* implementation of setAge function
 * the function calculates the age (in years) of a patient given the following... 
 * year of birth, month of birth, day of birth...
 * current year, current month, and current day.
 */

void HealthProfile::setAge( int currYear, int currMonth, int currDay, int birth_year, int birth_month, int birth_day )
{
     int change_inMonth;      // local variable to hold difference between current month and  birth month
     int change_inDay;       // local variable to hold difference between current current day and  birth day
     int change_inYear;     // local variable ot hold difference between current year and birth year
     
    change_inYear = currYear - birth_year;               // The difference between the year of birth and current year
    change_inMonth = currMonth - birth_month;            // The difference between the month of birth and current month 
    change_inDay = currDay - birth_day;                  // The difference or change in today and birth day
    
    if( change_inMonth >= 0 )                            
    {
            if( change_inMonth = 0 )                     
            {
                   if( change_inDay >= 0)                
                   {
                           if( change_inDay == 0)       
                           {
                                    age = change_inYear; 
                                      
                           }
                           else  age = change_inYear;    
                   }
                   else age = change_inYear - 1;         
            }
            else  age = change_inYear;                   
    
      }    
      else age = change_inYear - 1;                      
}               





/* implementation of setFirstName function.
 * the function sets the value of member variable firstName to new value fname
 */
void HealthProfile::setFirstName(string fname)
{
     firstName = fname;  // Assign the value of fname to firstName
}   // end of function setFirstName


/* implementation of setLastName function.
 * the function sets the value of member variable lastName to new value lname
 */
void HealthProfile::setLastName(string lname)
{
     lastName = lname;    // simple assignment
}    // end of function setLastName


/* implementation of setGender function.
 * the function sets the value of member variable setGender to new value new_gender
 */
void HealthProfile::setGender(string new_gender)
{
     gender = new_gender;    // Another Assignment statement
}    // end of function setGender


/* implementation of setMonth function.
 * the function sets the value of member variable month to new value new_month
 */
void HealthProfile::setMonth(int new_month)
{
     month = new_month;    // assign the value  of new_month to month
}    // end of functon setMonth


/* implementation of setDay function.
 * the function sets the value of member variable day to new value new_day
 */
void HealthProfile::setDay(int new_day)
{
     day = new_day;
}    // end of function setDay


/* implementation of setYear function.
 * the function sets the value of member variable year to new value new_year
 */
void HealthProfile::setYear(int new_year)   // haha... by new_year i don't mean january 1st
{
     year = new_year;    // ...after all the  rice and stew.... assign the value of new_year to year
}    // end of new_year celebration


/* implementation of setHeight function.
 * the function sets the value of member variable height to new value new_height
 */
void HealthProfile::setHeight(double new_height)
{
     height = new_height;  // simple assignment
}    // end of function setHeight


/* implementation of setWeight function.
 * the function sets the value of member variable weight to new value new_weight
 */
void HealthProfile::setWeight(int new_weight)
{
     weight = new_weight;   // another yet simple assignment
}    // end of function setWeight
