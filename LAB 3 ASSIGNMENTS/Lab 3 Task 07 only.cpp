//Task-07  (Shipping Charges)
#include <iostream>
#include <cmath>
using namespace std;
main()
{
	//Variables
double weight , distance;
int charges;
const int w_min=1,w_max=20,
          d_min=10,d_max=3000;
	//header
cout <<"\n\n---------------------------------------------------"<<endl;
cout<<"This program can calculate shipping charges.  "<<endl;
cout <<"-----------------------------------------------------"<<endl;

cout<<"Enter the weight of parcel(in kg): ";
cin>>weight;

if(weight<w_min || weight>w_max)
{cout<<"Shipping is not available for this product please, rerun the program "<<endl;}


else {
cout<<"Enter the distance where parcel is to be shipped(in km): ";
cin>>distance;

 if(distance<d_min || distance>d_max)
{cout<<"Shipping is not available for this distance";}

else{
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
cout<<"Shipping charges will be "<<charges;}}}

return 0;
}
