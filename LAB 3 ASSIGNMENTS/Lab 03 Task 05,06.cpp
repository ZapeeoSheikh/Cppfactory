//Task-05  (Time Calculator)
#include <iostream>
#include <cmath>
using namespace std;
main(){
{	//Variables

float sec ,day,min ,hour;
	
//header
cout <<"\n\n------------------------------------------------------"<<endl;
cout<<"This program will calculates time   "<<endl;
cout <<"------------------------------------------------------"<<endl;

cout <<"Enter the number of seconds: ";  
cin>>sec;

min=sec/60;       // 1min = 60sec
hour=sec/3600;    //1hour = 3600sec
day=sec/86400;     //1day = 86400sec

cout<<endl<<endl;

if (sec>=60 && sec<3600)
{cout <<"The number of minutes will be: "<<min<<" minutes";
}


else if (sec>=3600 && sec<86400)
{cout<<"The number of hours will be: "<<hour<<" hours";
}


else if(sec>=86400)
{cout<<"The number of days will be: "<<day<<" Days";
}
  


}
//---------------------------------------------------------------------------------
//Task-06 (Bank Charges)
#include <iostream>
#include <cmath>
using namespace std;

{
	//Variables
int cheque ,p_cqe ;    //cheque = no. of cheque
double b_balance ,total_monthly ;   //total_monthly =total monthly charges

const int bank_charges=50;

	//header
cout <<"\n\n------------------------------------------------------"<<endl;
cout<<"This program can Calculate bank service fee for the month.  "<<endl;
cout <<"------------------------------------------------------"<<endl;

cout <<"What is your beginning balance:  ";
cin>>b_balance;
//----------------------------------
if (b_balance < 0)
    cout << "URGENT! Your account is overdrawn."<<endl;
//----------------------------------    
cout<<"No. of Cheques written:  ";
cin>>cheque;

if(b_balance<15000)    //b_balance stands for beginning balance 
b_balance=100;
else
b_balance=0;

if(cheque<0)
{cout<<"  Error Occur compile again and rewrite acuarte value"<<endl;
cout<<"\n\n\nThis is not an acurate value";}
else{
if (cheque>1 && cheque<20)
{p_cqe=10*cheque;     //p_cqe stands for price of total cheque 
}
else if(cheque>=20 && cheque<=39)
{p_cqe=8*cheque;
}
else if(cheque>=40 && cheque<=59)
{p_cqe=6*cheque;
}
else
{p_cqe=4*cheque;
}


total_monthly=bank_charges+b_balance+p_cqe;
cout << "Bank's service fees for the month are: Rs";
    cout << total_monthly << endl;
}

    cout << endl 
         << endl;
return 0;
}
}
