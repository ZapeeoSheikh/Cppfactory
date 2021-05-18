//**********************( Lab 09 )****************************
//********************Task 08 ( Over-loading  )**********************
#include <iostream>
using namespace std;


int Billing ;


double computeBill(double Price)  

{

cout <<"Please enter the Price of bill : ";
cin>> Price ;
double taxes = 0.08*Price;

return Price+taxes;

}

double computeBill(double Price, int quant) {

//declare double type variable
cout <<"\nPlease enter the Price of Bill 1 : ";
cin>> Price ;
cout <<"Please enter the Price of Bill 2 : ";
cin>> quant ;

double taxes = 0.08*(Price*quant);

//return the output

return (quant*Price)+taxes;

}

//override the function

double computeBill(double Price, int quant,double value) {

//declare double type variable

cout <<"\nPlease enter the Price of Bill 1 : ";
cin>> Price ;
cout <<"Please enter the Price of Bill 2 : ";
cin>> quant ;
cout <<"Please enter the Price of Bill 3: ";
cin>> value ;


double taxes = 0.08*(Price*quant);

//return the output

return ((quant*Price)+taxes)-value;

}

// main 
 int main() {


double Price ;  int quant ; double value ;
//call the following function with argument

cout <<"It's : "<< computeBill( Price)<<endl;

cout <<"It's : "<< computeBill( Price , quant)<<endl;

cout <<"It's : "<< computeBill( Price, quant , value)<<endl;



}


