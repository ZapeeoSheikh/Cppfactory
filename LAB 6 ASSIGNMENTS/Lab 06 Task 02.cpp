//**********************( Lab 06 )****************************
//********************Task 02 (Triangle T )**********************
#include <iostream>
#include <iomanip>
using namespace std;
main(){
	//rows
for(int i=0 ; i<=5 ; i++)      //loop
	{  
	 //columns
	for(int s=0 ; s<=5 ; s++)      //loop
      cout <<" ";
      	for(int j=5-i ; j>0 ; j--)      //loop for spaces right way
      cout <<" ";
   	for(int k=0 ; k<2*i+1 ; k++)     //loop
 
 			cout<<"T";   
//cout <<endl;

cout <<endl;}
	//}
	return 0;
}
