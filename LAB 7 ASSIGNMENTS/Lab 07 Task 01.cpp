//**********************( Lab 07 )****************************
//********************Task 01 (Large & Short Array)**********************
#include <iostream>
using namespace std;
main(){
	int Arr[10] , smallest , largest;   //declaration 
	
	
	cout <<"Enter the values of Array with size 10 : \n";
	
	for (int i=0 ; i < 10 ; i++)      //Loop till 10 numbers 
	 {
	 cout <<"Number "<<i+1<<" : ";  //Array starts from number 0 , thatswhy we add 1
	 cin>>Arr[i] ;      //input user
	}
	
//-------------------------------------------------
	
	// Value initilization for smallest and largest in array
	smallest=Arr[0];    //Lets Assume, smallest value is equal to first array number 
	largest=Arr[0];    // initialize largest value to first array number


//-------------------------------------------------
cout<<endl;
for (int i=0 ; i < 10 ; i++)  //we use loop here , in order to check for all 10 input values  
{
if (Arr[i]<smallest)   //the values which are smaller then array [0] stores here bcz of if condition 
smallest=Arr[i];

if (Arr[i]>largest)   //similarly  greater then array [0] stores here 
largest=Arr[i];
}


//----------------------------------------------
//Outcomes 
cout <<"The smallest Array is :"<<smallest<<endl;  
cout <<"The largest Array is :"<<largest<<endl;



//Termination 
	return 0;
}
