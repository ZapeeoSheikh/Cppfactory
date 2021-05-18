//Task-03 (Body Mass Index)
#include <iostream>
#include <cmath>
using namespace std;
main(){
{
	//Variables
double weight ,height , bmi ;
	
//header
cout <<"\n\n------------------------------------------------------"<<endl;
cout<<"This program can calculates and display a person’s Body Mass Index (BMI)  "<<endl;
cout <<"------------------------------------------------------"<<endl;
cout<<"What is your weight (in pounds): ";
cin >>weight;
cout <<"what is your height (in inches): ";
cin>>height;

bmi=((weight) * (703/pow( height,2)));
cout <<"Bmi is : "<<bmi<<endl;

if (bmi>=18.5 && bmi<=25.0)
	{cout<<"\n\n         Optimal Weight";
}
else if (bmi <18.5 )
{cout <<"\n\n         Underweight";
}
else
{cout <<"\n\n         Overweight";
}

}
//---------------------------------------------------------------
//Task-04  (Mass & Weight)
#include <iostream>
#include <cmath>
using namespace std;

{
	//Variables
	double m,weight;
	//contsant variable  
	const int g=9.8;   //g stands for gravity
	//header
	cout<<endl;
cout <<"\n\n------------------------------------------------------"<<endl;
cout<<"This program can calculates weight  "<<endl;
cout <<"------------------------------------------------------"<<endl;

cout <<"Enter the mass of an object (in kg): ";
cin>>m;    //m stands for mass


weight =m*g;   //formula of weight

cout <<"Weight will be: "<<weight<<" N"<<endl<<endl<<endl;

if (weight>1000)
{cout <<"      It is Too Heavy ";
}
else
{cout<<"       It is Too Light";
}

return 0;
}
}
