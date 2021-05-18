//Task 17 (Stock Transaction Program)
#include <iostream>
#include <cmath>
using namespace std;
main(){
{ // Variables
    const int no_of_stock=1000;
              
    double commision=0.02,
	       p_price_per_share=32.87,
	       s_price_per_share=33.92,
		   paid,
		   commision_amt_sell,
		   commision_amt_buy,
		   sold,
		   profit;
//header
cout<<endl;
cout<<"------------------------------------------------"<<endl;
cout <<"This Program will display the information \n";
cout<<" about Stock Transaction Program. \n";
cout<<"------------------------------------------------"<<endl<<endl<<endl;

//paid is the total amount of stocks that kathryn pay to the brooker after buying stocks
paid=no_of_stock*p_price_per_share;
cout<<"The amount of money Kathryn paid for the stock : "<<paid<<endl;

//comission is constant 
commision_amt_buy =paid*commision;
cout<<"The amount of commission Kathryn paid her broker when she bought the stock : "<<commision_amt_buy<<endl;

//sold is the total amount of stocks that kathryn get to the brooker after solding stocks
sold=no_of_stock*s_price_per_share;
cout<<"The amount that Kathryn sold the stock for : "<<sold<<endl;

//comission is constant
commision_amt_sell=sold*commision;
cout<<"The amount of commission Kathryn paid her broker when she sold the stock : "<<commision_amt_sell<<endl;

//substract sold money to bought money(excluding commision in all casses)
profit=(sold-commision_amt_sell)-(paid-commision_amt_buy);
cout<<"The amount of profit that Kathryn made after selling her stock and paying"<<endl;
cout<<"the two commissions to her broker: "<<profit<<endl<<endl;

}  
//----------------------------------------------------------------------------------
//TASK 18 (Unique Task in lab 1 & lab 2)
//TASK 07 (Denomination) is a unique task and we can't use this type of task in lab 1 and lab 2 only a single time
#include<iostream>
using namespace std;

{ //Variables
    int amt,R500,R100,R50,R20,R10,R5,R1;
    //Header
    cout<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout <<"This Program can tells the number of Notes in the entered amount. "<<endl;
	cout<<"---------------------------------------------------------------"<<endl;
	
	//Ask user to insert amount 
	cout<<"Enter amount : ";
	cin>>amt;
	
	//Formulas
	R500=amt/500; //divide amount by 500
	amt=amt%500;  //if we haven't use % then program will be display total notes in all numbers(i.e 500,200,100,50,20..)
	R100=amt/100;//divide amount by 100
	amt=amt%100;
	R50=amt/50;//divide amount by 50
	amt=amt%50;
	R20=amt/20;//divide amount by 20
	amt=amt%20;
	R10=amt/10;//divide amount by 10
	amt=amt%10;
	R5=amt/5;//divide amount by 5
	amt=amt%5;
	R1=amt;
	
	//Display the values
	cout<<"Rs.500 : "<<R500<<"\nRs.100 : "<<R100<<"\nRs. 50 : "<<R50<<
		"\nRs. 20 : "<<R20<<"\nRs. 10 : "<<R10<<"\nRs.  5 : "<<R5<<"\nRe.  1 : "<<R1;
//Terminate program
return 0;
}
return 0;
}
