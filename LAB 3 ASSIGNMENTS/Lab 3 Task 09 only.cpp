//Task-09 (Sales Commission Calculator)
#include <iostream>
using namespace std;
main()
{
	//Variables
	int three,second ,last;
	const int salesperson=200;
	float sale1,sale2,sale3 ,avreage ;         
	
	
cout <<"\n\n---------------------------------------------------------"<<endl;
cout<<"This program can calculate the salesperson’s earnings  "<<endl;
cout <<"----------------------------------------------------------"<<endl;

cout <<"Enter the earning of 3rd last week: ";
cin>>three;
sale1 =(three*0.09)+200;
cout<<"Sale was: "<<sale1 <<endl;

cout <<"Enter the earning of 2nd last week: ";
cin>>second ;
sale2 =(second *0.09)+200;
cout<<"Sale was: "<<sale2<<endl ;

cout <<"Enter the earning of last week: ";
cin>>last;
sale3 =(last*0.09)+200;
cout<<"Sale was: "<<sale3 <<endl;

if(sale1>0&&sale2>0&&sale3>0){
avreage=(sale1+sale2+sale3)/3;
cout<<"The avreage earning of last three week will be : "<<avreage<<endl;


//maximum sales
if(sale1>sale2&&sale3)
{cout<<"Maximum earning will be : "<<sale1<<endl;}
else if(sale2>sale1&&sale3)
{cout<<"Maximum earning will be : "<<sale2<<endl;}
else if(sale3>sale2&&sale1)
{cout<<"Maximum earning will be : "<<sale3<<endl;}


//Minimum sales
if(sale1<sale2&&sale3)
{cout<<"Minimum earning will be : "<<sale1<<endl;}
else if(sale2<sale1&&sale3)
{cout<<"Minimum earning will be : "<<sale2<<endl;}
else if(sale3<sale2&&sale1)
{cout<<"Minimum earning will be : "<<sale3<<endl;}}


else
{cout<<"Sales must be positive ,rerun the program and enter acurate values";
}


    return 0;
}
