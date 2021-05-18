#include <iostream>
using namespace std;
main ()
{//VARIABLE 
int a;
    //HEADER
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO FIND EVEN & ODD "<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	
	//user input 
cout<<"Enter the integer: ";
cin>>a;
if ( a % 2 == 0)
        cout << a << " is even.";
    else
        cout << a << " is odd.";

    return 0;
}
