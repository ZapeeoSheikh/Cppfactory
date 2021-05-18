//******************LAB 05*******************
//*******TASK 06 (POPULATION)**********
#include <iostream >
#include <cmath >          //This is used for whenever we used to write formula in program
#include <iomanip>        //This is used because i have used setw for space in below

using namespace std;
main(){//inputs
int n , days ;         //n is number of population  
double increase ;     //increase is the number of percentage increment in a day
cout<<"Enter a Starting Number of Population : ";
cin>>n;
if (n>0){
while (n<2)    //if this statement is true then looping occurs
  { 
   cout<<"Enter a number of Population not less then 2 : ";
cin>>n;
     }
     
cout<<"\nEnter the increase percentage in a day (in %) : ";
cin>>increase;

while(increase<0)
{
	cout<<"\nPlease enter the non-negative percentage (in %) : ";
	cin>>increase;}

cout<<"Enter the number of days : ";
cin>>days;

while(days <1)
{
cout<<"Enter the number of days (greater then 1) : ";
cin>>days;
}

cout <<"\nDay \t\tPopulation";
cout<<"\n----------------------------\n";
for(int i=1 ; i<=days; i++)
{n =n*(1+increase/100);
cout <<setw(2)<<i<<"\t"<<"|"<<"\t"<< n<<"\t"<<"|"<<endl;
}}

else
cout <<"\nPopualtion must be in a Positive number \nCompile again and enter positive number\n\t*************";
	return 0;
}
