//**********************( Lab 09 )****************************
//********************Task 07 ( Functions calling functions )**********************
#include <iostream>
using namespace std;

int input1 , input2 , variable1 , variable2 , n1 , n2 , output1 , output2;


//function defination
int get_input(int& input1, int& input2)
{
	cout <<"Enter the 1st number : ";
	cin>>input1;
	
	cout <<"Enter the 2nd number : ";
	cin>>input2;
	
	cout << "\nInput 1 is :" <<input1<<endl;
	cout << "Input 2 is :" <<input2<<endl;
}


 int swap_values(int variable1, int variable2)
{
	cout <<"\n\nEnter the 1st number : ";
	cin>>variable1;
	
	cout <<"Enter the 2nd number : ";
	cin>>variable2;
	
	cout << "\nInput 1 is : " <<variable1<<"\t "<< "Input 2 is : " <<variable2<<endl;
	int	swap = variable1 ;        //swaping procedure
	variable1 = variable2 ;
	variable2 = swap ;
	cout << "Output 1 is : " <<variable1<<"\t "<< "Output 2 is : " <<variable2<<endl;
}


int  order(int& n1, int& n2)
{
cout <<"\n\nEnter the 1st number : ";
	cin>>n1;
	
	cout <<"Enter the 2nd number : ";
	cin>>n2;
	
	if(n1 <= n2)
	{
		cout << "\nInput 1 is : " <<n1<<"\t "<< "Input 2 is : " <<n2<<endl;
		int	swap = n1 ;   //swap
		n1 = n2 ;
		n2 = swap ;
		cout << "Output 1 is : " <<n1<<"\t "<< "Output 2 is : " <<n2<<endl;	
	}
	else
		cout << "\nInput 1 is : " <<n1<<"\t "<< "Input 2 is : " <<n2<<endl;
}


int give_results(int output1, int output2)
{
	
	cout <<"\n\nEnter the 1st number : ";
	cin>>output1;
	
	cout <<"Enter the 2nd number : ";
	cin>>output2;
	
	cout << "\nInput 1 is : " <<output1<<"\t "<< "Input 2 is : " <<output2<<endl;
    int	swap = output1 ;   //swap
	output1 = output2 ;
	output2 = swap ;
	cout << "Output 1 is : " <<output1<<"\t "<< "Output 2 is : " <<output2<<endl;
}


main(){

//calling 


 cout << get_input( input1 , input2) ;
 //Reads two integers from the keyboard 
 //stores them in input1 and input2 respectively.
 
 
 cout << swap_values( variable1 , variable2) ;
  //swaps the values of variable1 and variable2.
  
  
 cout << order( n1 , n2) ;
 //Orders the numbers in the variables n1 and n2 
 //so that after the function call n1 <= n2
 
 
 cout << give_results( output1 , output2) ;
// Outputs the values in output1 and output2
// Assumes that output1 <= output2

//Termination
	return 0;
}

