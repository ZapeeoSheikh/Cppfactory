//**********************( Lab 07 )****************************
//********************Task 05 ( Even values  )**********************
#include <iostream>
using namespace std;
main(){
int Arr[10];
	cout <<"Enter  the values of arrays ( size 10 ) :\n";
for (int i=0 ; i<10 ; i++){
	cin>>Arr[i];
}
cout <<"\nEven number will be : \n"; 
for (int i=0 ; i<10 ; i++){
if(Arr[i]%2==0)      //this show if the remainder of initialized array by 2 is zero then even number printed ;
{                    //even numbers are those which completely divide to 2 yeild remainder 0 
cout <<Arr[i];
cout <<endl;
}
}
//Termination
	return 0;
}

