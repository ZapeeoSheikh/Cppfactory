//TASK 09
 #include <iostream>
 #include <iomanip>

using namespace std;
main(){
{
    // Variables
    const int NUM_OF_MONTHS = 3;
    
    string month_1,
           month_2,
           month_3;
    
    float rainfall_month_1,
          rainfall_month_2,
          rainfall_month_3,
          total,
          average;
    
    // Explain program, ask user to press enter to continue
    cout << endl;
    cout << "---------------------------------------------";
    cout << "\nThis program calculates the average \n";
    cout << " rainfall for three months." << endl;
    cout << "---------------------------------------------";
    cout << "\n\nPress Enter to continue." << endl;
    cin.get();
    
    // Ask user for month and rainfall
    cout << "Enter the name for month 1: ";
    cin >> month_1;
    cout << "How many inches of rain fell for " << month_1;
    cout << ": ";
    cin >> rainfall_month_1;
    
    cout << "Enter the name for month 2: ";
    cin >> month_2;
    cout << "How many inches of rain fell for " << month_2;
    cout << ": ";
    cin >> rainfall_month_2;
    
    cout << "Enter the name for month 3: ";
    cin >> month_3;
    cout << "How many inches of rain fell for " << month_3;
    cout << ": ";
    cin >> rainfall_month_3;
    
    // Calculate total & average
    total = rainfall_month_1 + rainfall_month_2 + rainfall_month_3;
    average = total / NUM_OF_MONTHS;
    
    // Display rainfall average
    cout << "\nThe average rainfall for ";
    cout << month_1 << ", ";
    cout << month_2 << ", and ";
    cout << month_3 << " is ";
    cout << average << " inches.\n" << endl;

} 
//--------------------------------------------------------------------------------
//Task 10
#include <iostream>
#include <string>
using namespace std;
{
   //variables
   string name;
   float adult_no, child_no,
      age,adult,child,
	  gross,total,net,
	  distributor_cut;

    const int no=10;
//header
cout<<endl;
cout<<"---------------------------------------------------------------------------------------"<<endl;
cout<<"This Program can calculates a theater’s gross and net box office profit for a night. \n";
cout<<"---------------------------------------------------------------------------------------"<<endl;

//Amount stored
adult=500;
child=250;

//ask user to put data
cout<<"Enter the name of movie: ";
cin>>name;
cout<<"Number of adult tickets sold: ";
cin>>adult_no;
cout<<"Number of children tickets sold: ";
cin>>child_no;

//sum of number of adult ticket and number of child ticket
total=adult_no+child_no;

age>60==adult-0.10; //10% discount of the person who's age is greater then 60
cout<<"Age of customer above 60: "<<no<<endl; //Fixed number of customer who's age is greater then 60

gross=((adult*adult_no)-((adult*no)*age))+(child*child_no);  //product of no. of tickets with price of tickets and then sum to all
cout<<"Gross Box Office Profit: "<<gross<<endl;

net=gross*0.20; //movie theater profit 20%
cout<<"Net Box Office Profit: "<<net<<endl;
distributor_cut=gross-net;  //distributer profit
cout<<"Amount Paid to Distributor: "<<distributor_cut<<endl;

// Terminate Program
return 0;
}
return 0;
}
