//BEGGINING OF C++ LANGUAGE 
//...*ALL OPREATORS
//THERE ARE THREE TYPE OF OPREATOR
//1.ARITHMETIC OPREATOR 
//2.COMPARISSION OPRERATOR
//3.logical opreator
//...*GLOBAL VARIABLE 
//...*Type casting 
//...*mainpulators          //*Operator Precedence(BoDMAS RULE ....left to right solve )

//...*CONTROL STRUCTURE
//1.secquence (staight forward program)
//2.selection (if-else,if-else leader , switch-case statement)
//3.loop (for , while , do-while)
//...for loop
//...while loop
//...do while loop
#include <iostream >
#include <iomanip>
using  namespace std;
 int c=45;

main()
{
 int a=4,b=6;
 int c;
cout <<"OPREATORS IN C++: "<<endl;
cout<<"Following are the types of operators in C++"<<endl;
//Arithmetic Opreators 
cout <<"The value of a + b is "<<(a+b)<<endl;
cout <<"The value of a - b is "<<(a-b)<<endl;
cout <<"The value of a * b is "<<(a*b)<<endl;
cout <<"The value of a / b is "<<(a/b)<<endl;
cout <<"The value of a % b is "<<(a%b)<<endl;
cout <<"The value of a ++ b is "<<(a++)<<endl;
cout <<"The value of a -- b is "<<(a--)<<endl;
cout <<"The value of ++a is "<<(++a)<<endl;
cout <<"The value of --a is "<<(--a)<<endl;

cout<<endl<<endl;

//asignment operator 
//int a=3, b=5;
//char d='d';
//float x=67.89;

//COMPARISSION OPRERATOR
cout <<"The value of a == b is " <<(a==b)<<endl;
cout <<"The value of a != b is " <<(a!=b)<<endl;
cout <<"The value of a <= b is " <<(a<=b)<<endl;
cout <<"The value of a >= b is " <<(a>=b)<<endl;
cout <<"The value of a < b is " <<(a<b)<<endl;
cout <<"The value of a > b is " <<(a>b)<<endl;


cout<<endl<<endl;
//logical opreator
cout <<"Following are the LOgical opreator in C++"<<endl;
cout <<"The value of ((a==b)&&(a<b)) LOgical opreator is"<<((a==b)&&(a<b))<<endl; //logical AND OPERATOR
cout <<"The value of ((a==b)||(a<b)) LOgical opreator is"<<((a==b)||(a<b))<<endl; //logical OR OPERATOR
cout <<"The value of (!(a==b)) LOgical opreator is"<<(!(a==b))<<endl; //logical NOT OPERATOR

cout<<endl<<endl;
//GLOBAL VARIABLE 
c = ( a + b ) ;
cout <<"The sum is "<<c<<endl;         //local
cout <<"The global c is "<<::c<<endl;    //global


cout<<endl<<endl;
//type casting
int x=45;
float y=45.567;
cout <<"The expression is "<<int(y)<<endl;
cout <<"The expression is "<<(int)y<<endl;

y+=x;
cout <<"The expression is "<<float(y)<<endl;
cout <<"The expression is "<<float(x)<<endl;

cout<<endl<<endl;
//mainpulators
//1.endl--->#include <iostream>
//2.setw--->#include <iomanip>         (declare spaces in output)
cout <<"The value will be"<<setw(5)<<x<<"\t after using setw(5)"<<endl;   //\t is used to leave a tab space in output 

cout<<endl<<endl<<endl;
//switch statement
int age; 
cin>>age ;
switch (age){

case 18:
cout <<"YOU ARE 18 BY AGE";
break;

case 22:
cout <<"YOU ARE 22 BY AGE";
break;

default:
	cout <<"NO SPECIAL CASE";
break;
}


cout<<endl<<endl<<endl;
//for loop
for(int i=1;i<=5;i++)
{
cout <<i*i<<endl;
}

cout<<endl<<endl<<endl;
//while loop
int j=0;
while(j<=5)
{cout<<j<<endl;
j++;
}

cout<<endl<<endl<<endl;
//do-while loop
int i=1;
do
{cout<<i*3<<endl;
i++;
}while(i<=10);
//*******************************(((((PRACTICE #01)))))**************************************************
//_______________________________________END_____________________________________________________________
return  0;
}
