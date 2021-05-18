//**********************( Lab 07 )****************************
//********************Task 08 ( phone book )**********************
#include <iostream>
using namespace std;
main(){
	
string name[]={"ahmed","ali","mohsin","dua"}  ;
string enterName ;
string phoneNumber[]={"0321-2000543","0320-1234567","0345-9008908","0323-5678123"};
string targetNum , targetPhone ;

cout <<"\n\tEnter the Name : ";
cin >> enterName;

for (int i=0 ; i<4 ; i++){
	
if ( enterName == name[i])   //if match the entered name in our data then print the save number 
// bcz array 0 have a name with another array 0 having a certain number
{
	
cout <<"\tPhone number will be : "<< phoneNumber[i];  //both array matchs then declare
cout <<endl;

}
 
}

//Termination
	return 0;
}

