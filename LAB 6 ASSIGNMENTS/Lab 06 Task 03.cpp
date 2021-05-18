//***************************( Lab 06 )********************************
//***************************( Task 03 )********************************
//-------(InBetween Number)--------
#include <iostream>
using namespace std;
main(){
	int num1 , num2 ;      //variable declaration    
	
	//inputs
	cout<<"Enter Number 1 : ";
	cin>>num1 ;
	cout<<"Enter Number 2 : ";
	cin>>num2 ;
	
	//for displaying numbers continuesly
	if(num1 < num2)	{
for(int i = num1 ; i <= num2  ; i++ )  //This loop will only work when num1 is less then num2 
{
cout<<i<<"\t";
}}

   else
{

for(int i = num1 ; i >= num2  ; i-- )  //This loop will only work when num1 is greater then num2 
{
cout<<i<<"\t";
}}
//Terminate Program
  return 0; 
} 
