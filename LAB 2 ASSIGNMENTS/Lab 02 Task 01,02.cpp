//Task 01
#include <iostream>
#include <cmath>
using namespace std;
main(){
{ // Variables
	double value1,
	       value2, 
	       value3;
	       
	// Explain program, ask user to press enter to continue
cout<<endl;
cout<<"------------------------------------------------"<<endl;
cout <<"This Program will find  \n";
cout<<"the value3. \n";
cout<<"------------------------------------------------"<<endl;

   //Ask user to enter the number
	cout <<"Enter the number: ";
	cin>>value1;
	value2 = 2*pow(value1,2.0);
	value3 = 3 + value2 /2-1;
	
	cout <<value3<<endl<<endl<<endl<<endl<<endl<<endl;
//2 result will be 6
//5 result will be	27
//4.3 result will be	20.49
//6 result will be	38
	
}
//---------------------------------------------------------------------------------------------
//TASK 02
{// Variables
	int maximum,
	    used,
	    remaining;
	    
		// Explain program, ask user to press enter to continue
cout<<endl;
cout<<"------------------------------------------------"<<endl;
cout <<"This Program is use to find remaining balance. \n";
cout<<"------------------------------------------------"<<endl;
cout<<"Thanks for pressing Enter key"<<endl;
cin.get();

   //Ask user to enter the amounts 
	cout<<"Enter the Maximum amount: ";
	cin>>maximum;
	cout <<"Enter the amount Used: ";
	cin>>used;
	
	//simply substract the used amount by total amount, so that we may get remaining balance 
	remaining =maximum-used;
	cout<<"Your Remaining balance is: "<<remaining;
	return 0;
	
}  //Terminate program
return 0;
}
