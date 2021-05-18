//**********************( Lab 09 )****************************
//********************Task 01 ( cup to ounces )**********************
#include <iostream>
using namespace std;

//Function defination 
void showintro ()
{
	cout <<"********** Welcome to our store **********\n ";
	cout <<"****** Please enter your order ******\n";
	cout <<" Enter the number of cups : ";
}

//Function defination 
int getcups()
{
	int n;
	return n;
}

//Function defination 
int cuptoOnces ( int n)
{
	cout <<"\nThe given order in fluid ( ounces ) is ";
	return n* 8 ;
	
}

//Calling in main function  
main(){
	
	int n ;
	showintro();
	cin>>n;
	
	getcups();
	cout <<cuptoOnces (n);

//Successfully Execute 
return 0;	
}
