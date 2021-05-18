//**********************( Lab 08 )****************************
//********************Task 04 ( Present Value )**********************
#include <iostream>
#include <cmath>
using namespace std;
//const int F = 1000000  , numberYears = 10 ;
double presentValue( double FutureAmount , double  rate  , int  numberYears )
{
	return ( FutureAmount / pow(( 1 + rate ) , numberYears ));
}

main(){
double rate , FutureAmount , numberYears ;

//user input 
cout <<"Enter the future amount : ";
cin>> FutureAmount ;

cout <<"Enter the number of years : ";
cin>>numberYears ;

cout <<"Enter the intrest rate : ";
cin>>rate ;


cout <<"The Present value will be : "<< presentValue( FutureAmount , rate  , numberYears );

	return 0;
}

