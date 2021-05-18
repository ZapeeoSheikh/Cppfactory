#include <iostream>
using namespace std;
main()
{int y,a,b,c,d,e,f,g,h,i,k,l,m,n,p,q;
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO FIND THE Date of Easter of any year"<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	
	//user inputs 
cout <<"Enter the year : ";
cin>>y;
a=y%19;
b=y/100;
c=y%100;
d=b/4;
e=b%4;
f=(b+8)/25;
g=(b-f+1)/3;
h=(19*a+b-d-g+15)%30;
i=c/4;
k=c%4;
l=(32+2*e+2*i-h-k)%7;
m=(a+11*h+22*1)/451;
n=(h+l-7*m+114)/31;
p=(h+l-7*m+114)%31;
q=10*(p+1)+n;
cout <<"The month (3 for March and 4 for April) : "<<n<<endl;
cout <<"The day of the month : "<<p+1<<endl;
cout<<"Date of Easter this year is: "<<q<<endl;
return 0;
}
