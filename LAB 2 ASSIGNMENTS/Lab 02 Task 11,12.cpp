//task 11 (Calories consumption)
#include <iostream>
using namespace std;
int main(){
{
 int calories,no;
 int cookies;
 
 // Constant Variables
    const int COOKIES_PER_BAG       = 40,
              SERVINGS_PER_BAG      = 10,
              CALORIES_PER_SERVING  = 300;
 cout<<"----------------------------------------------"<<endl;
 cout <<"Program that tell you the calories consumption"<<endl;
 cout<<"----------------------------------------------"<<endl;
 
 cout<<"Total number of cookies in a bag: "<<COOKIES_PER_BAG<<endl  ;
 cout<<"How many cookies you eaten?  ";
 cin>>no;
 //1 serving = 4 cookies
 /* 40 cookies= 3000 calorey
 so each cookie contains 75 calorey 
 to find calories multiply it with 75*/
 calories = no * (CALORIES_PER_SERVING / (COOKIES_PER_BAG / SERVINGS_PER_BAG));

 cout<<"You consume " <<calories<<" calories "<<endl<<endl<<endl;
 
 }
 //---------------------------------------------------------------------------------------
 //TASK 12 (Property tax)
#include<iostream>
using namespace std;

{ //Variables
    const int exemption=5000;
    double actual_value,
    assessed_value,
    tax_rate,
    a_tax,
    q_tax;
    //Header
    cout<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout <<"This Program can tells the Senior citizen property tax program. \n ";
	cout<<"---------------------------------------------------------------"<<endl;
	
	cout << "Enter the actual value of the property: ";
    cin >> actual_value;
    cout << "Enter the tax rate per $100: ";
    cin >> tax_rate;

    //calculate assessment value and tax
    assessed_value = actual_value*2.64;
    a_tax = (assessed_value -5000) * tax_rate/100;
    q_tax = a_tax/4;
    
    cout <<"You will pay "<<a_tax<<" annual property tax."<<endl;
    cout <<"Your quaterly payment will be "<<q_tax<<endl;
	
//Terminate program
return 0;
}
return 0;
}
