//******************LAB 05*******************
//*******TASK 09 (Binary to Decimal )**********

#include <iostream>
using namespace std;


int binaryToDecimal (int n)
{
int number = n ;                    //variables declartion
int decimal = 0 , position = 1 ;    //variables declartion 
int temp = number ;                 //variables declartion

//loop for repetation
while (temp) {
	int digit = temp % 10 ;
	temp = temp / 10 ;
	decimal += digit * position ;
	position = position * 2 ;
}
//Terminate program
return decimal ;
}
int main()
{
int number ;   //variables declartion
cout << "Please enter the number (Only 0 and 1 are binary digits) : " ;
cin >> number ;       //user input
cout << "\n Decimal Value is : " << binaryToDecimal (number) << endl ;

}
