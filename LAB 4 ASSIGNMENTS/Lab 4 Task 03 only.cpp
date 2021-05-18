#include <iostream>
using namespace std;
main()
{
//variables
float e_1,e_2,e_3 , hour ,total;
int h_1,h_2,h_3;
//header
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO FIND THE TOTAL PAY OF EACH EMPLOYEE"<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	
	//user inputs 
cout <<"Enter the basic pay of employee 1: ";
cin>>e_1;
cout <<"Enter the basic pay of employee 2: ";
cin>>e_2;
cout <<"Enter the basic pay of employee 3: ";
cin>>e_3;

cout <<"\nEnter the work hours of employee 1: ";
cin>>h_1;
cout <<"Enter the work hours of employee 2: ";
cin>>h_2;
cout <<"Enter the work hours of employee 3: ";
cin>>h_3;

if(h_1>=0&&h_2>=0&&h_3>=0)
{
cout <<"\nTotal pay of employee 1 will be: "<<e_1*h_1<<endl;
cout <<"Total pay of employee 2 will be: "<<e_2*h_2<<endl;
cout <<"Total pay of employee 3 will be: "<<e_3*h_3<<endl;}
else
{cout <<"            \n\n   THERE IS AN ERROR";}

return 0;
}
