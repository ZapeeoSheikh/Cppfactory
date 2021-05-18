//**********************( Lab 09 )****************************
//********************Task 09 ( Sum Of N Numbers )**********************
#include <iostream>
using namespace std;
int Sum_Of_Natural_Numbers(int Number);

int main()
{
  int Number, Sum = 0;
  
  cout <<"\nPlease Enter any Integer Value\n";
  cin>>Number;
  
  Sum = Sum_Of_Natural_Numbers(Number);
  
 cout <<"Sum of Natural Numbers = "<<Sum;
  return 0;
}
int Sum_Of_Natural_Numbers(int Number)
{
	if (Number == 0)
	{
		return Number;
	}
	else
	{
		return (Number + Sum_Of_Natural_Numbers(Number - 1));
	}
}
