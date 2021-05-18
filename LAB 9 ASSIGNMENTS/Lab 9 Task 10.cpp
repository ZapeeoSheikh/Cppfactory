//**********************( Lab 09 )****************************
//********************Task 10 ( Factorial )**********************
#include <iostream>
using namespace std;

int fac(int n )
{ 
if(n<3)
	{
		return n;
		}

 return n * fac( n-1 );  }
		
main(){

int n ;
cout <<"Enter the number : ";
cin>> n;
cout<<"The factorial of "<<n<<" is "<<fac(n);

//Termination
	return 0;
}

