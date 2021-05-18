//Task 01 (Magic date)
#include <iostream>
using namespace std;
main(){
{	//VARIABLES
int day ,month,year;
cout <<"\n\n--------------------------------------------"<<endl;
cout<<"This Program is used to find magic date "<<endl;
cout <<"----------------------------------------------"<<endl;
cout <<"Enter the date: ";
cin>>day;
cout <<"Enter the month: ";
cin>>month;
cout <<"Enter the year: ";
cin>>year;
if (day*month==year)
cout<<"MAGIC DATE";
else
cout <<"NOT A MAGIC DATE";

}
//-----------------------------------------------------------------------------
//Task-02 (Area of Rectangle)
#include <iostream>
using namespace std;
{
	//Variables
	int length_1,width_1,length_2,width_2, area_1,area_2;
	
//header
cout <<"\n\n------------------------------------------------------"<<endl;
cout<<"This program can compare area's of two rectangle "<<endl;
cout <<"------------------------------------------------------"<<endl;

	cout <<"Enter the length of rectangle 1: ";
	cin>>length_1;      //length 1 stands for length of rectangle 1
	cout <<"Enter the width of rectangle 1: ";
	cin>>width_1;
	cout <<"Enter the length of rectangle 2: ";
	cin>>length_2;
	cout <<"Enter the width of rectangle 2: ";
	cin>>width_2;
	
	//Formula to find area
	area_1=length_1*width_1;
	area_2=length_2*width_2;
	
	cout<<endl;
	if (area_1>area_2)
	cout <<"AREA OF RECTANGLE 1 IS GREATER then the area of rectangle 2.";
	else if (area_2>area_1)
	cout <<"AREA OF RECTANGLE 2 IS GREATER then the area of rectangle 1.";
	else
	cout<<"AREA OF BOTH RECTANGLE ARE EQUAL.";
	
	return 0;
}
return 0;
}
