//******************LAB 05*******************
//*******TASK 08 (Palindrome )**********

#include <iostream>
using namespace std;
main(){

int number , reversedN=0 ,oraginalN ,a;  //variables declartion

//header
cout <<"\n----------------------------------------------------------"<<endl;
cout<<"This program can  determines whether the number is a palindrome or not"<<endl;
cout <<"----------------------------------------------------------"<<endl;
//input
cout<<"Please enter the number you want to check!\n";
cin>>number;

//if both are equal
oraginalN=number;
while(number!=0){           //if number will be equals to 0 then condition becomes false
	a = number % 10;
  reversedN = reversedN * 10 + a;     //reversed integer 
  number/=10;
}

if (oraginalN == reversedN)
{cout<<"The number is a palindrome!\n";}
else 
{cout<<"The number is not a palindrome!\n";}
//Terminate program
return 0;

}
