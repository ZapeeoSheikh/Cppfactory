#include <iostream>
#include <iomanip>
using namespace std;
main()
{//VARIABLE
float a,b,c;
int user;
double weight ;
int charges;
    //HEADER
	cout <<"-------------------------------------------------------"<<endl;
	cout <<"Press the num key between 1 to 3 out of these number \n you will get Nested If statements .."<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	
//user input 
cin>>user;

if(user==1){
 cout<<"This Program is used to check triangle using if control statement \n";
 cout <<"Enter the 1st angle: ";
 cin>>a;
 cout <<"Enter the 2nd angle: ";
 cin>>b;
 cout<<"Enter the 3rd angle: ";
 cin>>c;
if(a+b+c==180)//condition
{cout <<"It's a Triangle...";}
}
//..............................................................
else if (user==2){
	cout <<"This Program is used to find EQUALITY BETWEEN A & B using if then else control statement \n";
    cout <<"Enter the 1st number: ";
    cin>>a;
    cout <<"Enter the 2nd number: ";
    cin>>b;
if(a=b)//conditions
{cout<<"Hence, A & B are equal..";}
else //conditions
{cout <<"A & B are not equal..";}}
//..............................................................
else if (user==3){
	    cout <<"This Program is used to calculate tables using if- else if control statement \n";
	    cout <<"Enter the 1st number: ";
        cin>>a;
        cout <<"Enter the 2nd number: ";
        cin>>b;
if(a<=10)//conditionssss
{cout<<"SUM OF TWO NUMBERS THEN PRODUCT WITH 3";
cout<<"Multiple of 3 :"<<(a+b)*3;}
else if (a<=20)
{cout<<"SUM OF TWO NUMBERS THEN PRODUCT WITH 4";
cout <<"Multiple of 4 :"<<(a+b)*4;}
else if(a<=30)
{cout<<"SUM OF TWO NUMBERS THEN PRODUCT WITH 5";
cout<<"Multiple of 5 :"<<(a+b)*5;}
else if (a>=31)
{cout<<"SUM OF TWO NUMBERS THEN PRODUCT WITH 10";
cout<<"Multiple of 10 :"<<(a+b)*10;}}
//................................................................
            else {
            cout<<"This program can calculate shipping charges using Nested If statements.  "<<endl;
            cout<<"Enter the weight of parcel(in kg): ";
            cin>>weight;
            if(weight <=2)
            {charges=50;
            cout<<"Shipping charges will be "<<charges;}

            else if(weight>2 && weight<=6)
            {charges=100;
            cout<<"Shipping charges will be "<<charges;}

            else if(weight>6 && weight<=10)
           {
            charges=150;
            cout<<"Shipping charges will be "<<charges;}

            else if(weight>10 && weight<=20)
            {charges=200;
            cout<<"Shipping charges will be "<<charges;}
			else
			{cout <<"SHIPPING IS NOT AVAILABLE ";}}

return 0;
}
