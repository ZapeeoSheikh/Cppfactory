#include <iostream>
using namespace std;
main ()
{//VARIABLE 
double h,rate,
 regularPay=40
, overtime,total, gross;
 int s,r;
    //HEADER
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO FIND HOUR WORK AND SHIFT "<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	
	//user input 
{
cout<<"\n*****************************"<<endl;
cout<<"Hours worked : ";
cin>>h;
cout<<"Shift: ";
cin>>s;
if(s=1)
{rate=17;
cout<<"Hourly Pay Rate : $"<<rate;}
else if(s=2)
{rate=18.50;
cout<<"Hourly Pay Rate : $"<<rate;}
else if(s=3)
{rate=22;
cout<<"Hourly Pay Rate : $"<<rate;}

cout<<"\nRegular Pay : $" <<regularPay*s<<endl;

if (h>40)
{overtime=regularPay;
cout<<"Overtime Pay : $ " <<overtime<<endl;}
else
{overtime=regularPay/2;
cout<<"Overtime Pay : $ " <<overtime<<endl;}

total=regularPay+overtime;
cout<<"Total of regular and overTime pay : $"<<total<<endl;
if(r == 1)
{cout<<"Retirment deduction " << total - gross;}

cout<<"Net Pay: $"<< gross;
}

return 0;
}
