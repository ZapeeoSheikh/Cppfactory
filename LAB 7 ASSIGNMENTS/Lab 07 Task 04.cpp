//**********************( Lab 07 )****************************
//********************Task 04 ( Reverse Array )**********************
#include <iostream>
using namespace std;
main(){
int Arr[10];         //max size
int size ;
cout <<"Enter the size of array : ";
cin>>size;
	cout <<"\nEnter  the values of arrays :\n";
for (int i=0 ; i<size ; i++){        //initilizing values of arrays by the user
	//int Arr[i];
	cin >> Arr[i] ;
	
} 
cout << endl ;
cout <<"Reverse numbers of array: \n";
for (int i=size-1 ; i>=0 ; i--){      //we have sub 1 from the size bcz we know array usually starts from 0 and we got an exta number in face of zero 
//int Arr[i];                         //so we start from array size -1 for reverse order array
cout <<Arr[i];
cout <<endl;
}

//Termination
	return 0;
}

