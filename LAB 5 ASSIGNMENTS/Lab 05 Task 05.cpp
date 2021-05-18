//******************LAB 05*******************
//*******TASK 05 (SUM THE GEOMETRIC SERIES)**********
#include <iostream >
#include <cmath >

using namespace std;
main(){
int n ;    //inputs store of integer variables 
const float a=.5 ,r=.5 ; 
double gm ,result;     //gm is the variable in which there is a continues decrement
cout<<"Enter a positive Number : ";
cin>>n;

while (n<=10)    //if 1 is less then entered value then loop continue till entered number

{  
     gm=a*pow(r,(n-1));
     cout<<gm<<endl;
     result=gm+result;       //result is final output after the addition of variable a 
       ++n;                 //increment operator
     }

{
cout <<"___________________"<<endl;
cout <<"GEOMETIRC SERIES SUM : "<<result;}
	return 0;
}
