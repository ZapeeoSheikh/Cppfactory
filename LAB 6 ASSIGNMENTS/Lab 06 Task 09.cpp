//***************************( Lab 06 )********************************
//***************************( Task 09 )********************************
//-------(Right triangle)--------
#include <iostream>
using namespace std;
main(){
	int row;      //variable declaration    
	
	//inputs
	cout<<"Enter the number of Rows : ";
	cin>>row;
	
	//loops for displaying every player score
//for row	
for(int i = 1 ; i <= row ; i++ )
{
//for column
	for(int j = 1 ; j <= i ; j++ )      //display ( * ) till value of i in a single line because of endl after row completion 

{
cout<<"*";
}

cout<<endl;

}


//Terminate Program
  return 0; 
}
