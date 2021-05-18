//**********************( Lab 07 )****************************
//********************Task 02 (Rainfall Statistics)**********************
#include <iostream>
using namespace std;
main(){
	double Arr[12]  , 
	highest , lowest  ;   //declaration 
	int sum=0;
	
	cout <<"Enter the total rainfall of 12 month : \n";
	
//----------------------------------------------------------------------
	
	
	for (int i=0 ; i < 12 ; i++)      //Loop till 10 numbers 
	 {cout <<"Month "<<i+1<<" : ";  //as we know the first value of array is 0 , thatswhy we use plus 1
	 cin>>Arr[i] ;      //input user
	sum = sum + Arr [i];  //initilize 0 so that it may furthur add all array
	}
	
	
//------------------------------------------------------------------


cout <<"\nTotal rainfall of the year will be : "<<sum;

double average = sum/12 ;       //formula

cout <<"\nAverage of the yearly rainfall will be : "<<average;


//---------------------------------------------------------------------
highest=Arr[0];          //initilize to be 1st array and then compare the 1st array with all arrays 
lowest=Arr[0];          //Similarly 


cout<<endl;
for (int j=0 ;  j < 12 ; j++)  //we use loop here , in order to check for all 10 input values  
{
if (Arr[j]<lowest){   //the values which are smaller then array [0] stores here bcz of if condition 
lowest=Arr[j];
}

if (Arr[j]>highest)   //similarly  greater then array [0] stores here 
{
highest=Arr[j];
}
}
	
cout <<"\nLowest rainfall : "<<lowest;
cout <<"\nHighest rainfall : "<<highest;

//Termination 
	return 0;
}
