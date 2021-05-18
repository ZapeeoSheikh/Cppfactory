//Task-10 (Credit Limit)
#include <iostream>
using namespace std;
main(){
{
	//Variables
int  account_no,total_item;
float new_balance;
const int b_balance=150000,
	      total_credit=20000;
cout <<"\n\n---------------------------------------------------------"<<endl;
cout<<"This program can  determine whether a department-store customer has"<<endl;
cout<<"exceeded the credit limit on a charge account"<<endl;
cout <<"----------------------------------------------------------"<<endl;

cout<<"Enter your account number: ";
cin>>account_no;
cout<<"\n Balance at the beginning of the month: "<<b_balance<<endl;
cout<<" Total of all items charged by this customer this month :";
cin>>total_item;
cout<<" Total of all credits applied to this customer's account this month  :"<<total_credit<<endl;

 new_balance=( b_balance + total_item )- total_credit;

if (new_balance>b_balance )
{cout<<"Credit Limit Exceeded";}
else
{cout<<" Allowed credit limit :"<<new_balance<<endl;}

}
//----------------------------------------------------------------------
//Task-11  (Palindrome)
#include <iostream>
using namespace std;

{
	//Variables

int number;
float a,b,c,
      d,e,
      l_total, r_total;
//header
cout <<"\n\n---------------------------------------------------------"<<endl;
cout<<"This program can  determines whether the number is a palindrome or not"<<endl;
cout <<"----------------------------------------------------------"<<endl;
//input
cout<<"Please enter the number you want to check!\n";
cin>>number;

a = number % 10;
b = (number % 100) / 10;
c = (number % 1000) / 100;
d = (number % 10000) / 1000;
e = (number % 100000) / 10000;

l_total=a+b+c;
r_total=c+d+e;

if (l_total == r_total)
{cout<<"The number is a palindrome!\n";}
else 
{cout<<"The number is not a palindrome!\n";}
//Terminate program
return 0;

}
return 0;
}
