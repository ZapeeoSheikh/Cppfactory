//**********************( Lab 08 )****************************
//********************Task 03 ( Kinetic Energy )**********************
#include <iostream>
using namespace std;

//Functions 
double kineticEnergy ( int  mass , int velocity)
{
	return (0.5 * mass * (velocity * velocity));      //Calculations
}


main(){

int mass , velocity ;

cout <<"Please Enter the of mass of the body (in kg) : ";
cin>>mass;

cout <<"Please Enter the velocity of the body (in meter per second): ";
cin>>velocity;


cout <<"\nThe kinetic Energy of the body will be : "<< kineticEnergy ( mass , velocity) ;   //Calling 

	return 0;
}

