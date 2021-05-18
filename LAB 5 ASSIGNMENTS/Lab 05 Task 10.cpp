//******************LAB 05*******************
//*******TASK 10 (Saving account )**********

#include <iostream>
using namespace std;
main(){

int  month ;  //number of months 
double  anuualrate , rate =0.0 , //rate is the earned intrest rate
      startingBalance , Totaldeposit =0.0 ,
      Totalwithdrawl=0.0 , deposit , withdrawl ;
    
	//User input   
cout <<"Please enter the anuual intrest rate : ";
cin>>anuualrate ;

cout <<"Enter the Starting Balance of your account : ";
cin>>startingBalance ;

while(startingBalance < 0)     //condition for negative number
{cout <<"Balance could not be negative \n Please enter the starting balance of your account :";
cin>>startingBalance ;
}

cout <<"Enter the number of months (since account establish): ";
cin>> month ;

while (month <0)   //condition 
{cout <<"Month could not be less then 0 \n Please enter the number of months :";
cin>>month ;
}


for (int i=1 ; i<=month ; i++)     //loop for each month data 
{cout <<"Enter the deposit amount of month "<<i<<" : ";
cin>>deposit;
while (deposit < 0)        //condition 
{cout <<"The value could not be negative \n Please enter the deposit amount of this month : ";
cin>>deposit;
}

Totaldeposit += deposit ;      //according to given formula 
startingBalance += deposit;


cout <<"Enter the withdrawl amount  of this month : ";
cin>>withdrawl;
while (withdrawl < 0)
{cout <<"The value could not be negative \n Please enter the withdrawl amount of this month : ";
cin>>withdrawl;
}
Totalwithdrawl += withdrawl ;        //given formula 
startingBalance -= withdrawl;


if(startingBalance < 0)
{cout<<"Sorry your account has been closed \n   ************************* ";
break;
}
else
{
rate += (anuualrate/12)*startingBalance;
startingBalance +=(anuualrate/12)*startingBalance;
}}
cout <<"\nEnding Balance : " << startingBalance; 
cout <<"\nTotal Deposit : " << Totaldeposit; 
cout <<"\nTotal Withdrawl : " << Totalwithdrawl; 
cout <<"\n Earned intrest : " << rate; 

//Terminate program
return 0;

}
