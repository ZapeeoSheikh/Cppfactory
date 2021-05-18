//******************LAB 05*******************
//*******TASK 03 (SUM OF INPUT NUMBERS)**********
#include <iostream >
using namespace std;
main(){
int j , sum =0;    //inputs store of integer variables 

cout<<"Enter a positive Number : ";
cin>>j;

int i=1;    //Starts form 1 
while (i<=j)    //if 1 is less then entered value then loop continue till entered number

{     if(j<0)     //if the entered value is less then 0 (negative number ) program ends  
     {break;}
       ++i;
      sum+=i;   }
if(j>0)
{cout<<"Sum = "<<sum-j;}
	return 0;         //Terminate program
}
