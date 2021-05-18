//TASK 07 (Denomination)
#include<iostream>
using namespace std;

main(){
{ //Variables
    int amt,R500,R100,R50,R20,R10,R5,R1;
    
    cout<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout <<"This Program can tells the number of Notes in the entered amount. \n ";
	cout<<"---------------------------------------------------------------"<<endl;
	
	cout<<"Enter amount : ";
	cin>>amt;
	
	//Formulas
	R500=amt/500;
	amt=amt%500;
	R100=amt/100;
	amt=amt%100;
	R50=amt/50;
	amt=amt%50;
	R20=amt/20;
	amt=amt%20;
	R10=amt/10;
	amt=amt%10;
	R5=amt/5;
	amt=amt%5;
	R1=amt;
	
	//Display the values
	cout<<"Rs.500 : "<<R500<<"\nRs.100 : "<<R100<<"\nRs. 50 : "<<R50<<
		"\nRs. 20 : "<<R20<<"\nRs. 10 : "<<R10<<"\nRs.  5 : "<<R5<<"\nRe.  1 : "<<R1<<endl<<endl<<endl<<endl<<endl<<endl;

}
//------------------------------------------------------------------------------------------
 //task 08(stadium tickets)
#include<iostream>
using namespace std;
{//variables
	int a , b, c, sold_a ,sold_b ,sold_c ,class_a , class_b ,class_c ,revenue;
	
	cout<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<"Program that calculate the number of tickets of a stadium. \n";
    cout<<"---------------------------------------------------------------"<<endl;
    
    //Store amounts of tickets
	a=2000;
	b=1000;
	c=500;
	
	//Enter the number of tickets of diffrent classes
	cout <<"Enter the number of tickets of Class A Sold: ";
	cin>>sold_a;
	cout<<"Enter the number of tickets of Class B Sold: ";
	cin>>sold_b;
	cout<<"Enter the number of tickets of Class C Sold: ";
	cin>>sold_c;
	
	//Multiply amount of tickets by number of tickets
	class_a=sold_a*a;
	class_b=sold_b*b;
	class_c=sold_c*c;
	
	//Finally add
	revenue=class_a+class_b+class_c;
	cout<<"The Total revenue genrated will be: "<<revenue;
	
} //Terminate Program
return 0;
}
