//***************************( Lab 06 )********************************
//***************************( Task 04 )********************************
//-------(Fibonacci Series)--------
#include <iostream>
using namespace std;
main(){
	int n , nextNum ,term1=0 ,term2=1;      //variable declaration    
	
	//inputs
	cout<<"Enter the number of terms : ";
	cin>>n ;
	
	cout<<"Fibonacci Series : ";
	//for displaying numbers continuesly
for(int i = 1 ; i < (n-1)  ; i++ )
{
    if(i==1){            //if i equals is 1 then value stores in term1
	  cout<<term1 <<", ";
}

     if(i==2){          //if i equals is 2 then value stores in term2
	cout<<term2<<", ";
	
}
nextNum = term1 + term2 ;    //then add previous number to very next number
term1=term2;
term2=nextNum;             //nextNum is the total sum of previous number and the very next number 

cout<<nextNum<<", ";
}
//Terminate Program
  return 0; 
} 
