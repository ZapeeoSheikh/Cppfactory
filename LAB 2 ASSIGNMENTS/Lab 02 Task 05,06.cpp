//TASK 05
#include <iostream>
#include <cmath>
using namespace std;
main(){
{ //Variables
	double angle1,angle2,x;
	
	cout<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout <<"Program that add sine with angle 1 to cosine angle 2. \n ";
    cout<<"------------------------------------------------"<<endl;
    //Enter the values
	cout<<"Enter angle 1: ";
	cin>>angle1;
	cout<<"Enter angle 2: ";
	cin>>angle2;
	
	//Formula
	x=sin(angle1)+cos(angle2);
	cout <<"Result is: "<<x<<endl<<endl<<endl<<endl<<endl<<endl;
	
}
//--------------------------------------------
//task 06
#include<iostream>
#include<cmath>
using namespace std;
{//Variables
	double a , angle_a;
	
	cout<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout <<"Program that calculate the cosecant of the angle. \n";
    cout<<"------------------------------------------------"<<endl;
    
    //Enter the angle
	cout <<"Enter the angle: ";
	cin >>a;
	
	//formula
	angle_a=1/sin(a);
	cout<<"Consecant of the angle: "<<angle_a;
	
	return 0;
}return 0;
}
