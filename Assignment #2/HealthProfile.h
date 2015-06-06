/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name: JOSEPH,JOHN EBIM
 * Reg No: 45644051DB
 * Department: STATISTICS
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string, string, string, int, int, int, int, double, int, int, int ); // constructor that initializes patient information
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
	
	// get functions for each attribute except the getAge function which have been provided already
	string getFirstName();			//	function to get patients first name
	string getLastName();			//	function to get patients last name
	string getGender();				//	function to get patients Gender. That is, whether male or female
	int getMonth();					//	function to get patients Month of birth
	int getDay();					//	function to get patients Day of birth
	int getYear();					//	function to get patients Year of birth
	double getHeight();				//	function to get patients Height in inches
	int getWeight();				//	function to get patients Weight in pounds
	
	// set functions for each attribute
	void setFirstName( string );			//	function to set patients first name
	void setLastName( string );			    //	function to set patients last name
	void setGender( string );				//	function to set patients Gender
	void setMonth( int );					//	function to set patients Month of birth
	void setDay( int );				    	//	function to set patients Day of birth
	void setYear( int );					//	function to set patients Year of birth
	void setHeight( double );				//	function to set patients Height in inches
	void setWeight( int );				    // 	function to set patients Weight in pounds
	void setAge( int, int, int, int, int, int );  //  function to calculate and set patients Age
	
    
    // TODO: Provide get and set function prototypes of each class attribute
    // Function prototypes for the constructor, getAge(), getBMI(), getMaximumHeartRate()
    // getTargetHeartRate() and getInformation() has already been provided
    
    
    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    
}; // end class HealthProfile
