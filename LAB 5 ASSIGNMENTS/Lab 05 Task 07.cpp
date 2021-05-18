//******************LAB 05*******************
//*******TASK 07 (Hotel Occupancy  )**********

#include <iostream>
using namespace std;
int main(){
	int floor , r ,Occupied , total=0 , totaloccupied=0;  //Variables
	 float percentage=0.0f;     //Variable for percentage 
	 
	 cout<<"How many floors , your hotel has ?  ";   //input user
	 cin>>floor;
	 
	 while(floor<1)         //This will continue looping till the condition becomes false      //restriction --->floor must be greater then 1
	 {
	 	
	 cout<<"Number of floor must be greater then 1 \n Re-enter the floor :  ";
	 cin>>floor; 
	 }
	 
	 for (int i=1 ; i<=floor ; i++)          //This will Keep asking rooms for every floor  
	 {
	 cout<<"How many rooms are there in floor "<<i<<" ? ";
	 cin>>r ;
	 
	 	while(r<10)            //restriction rooms must be not less then 10
		 {
	 		cout<<"Rooms must be greater then 10 \n Please Enter the number of rooms on this floor : ";
	 		cin>>r ;
			 }
	 		
	 		cout<<"How many rooms of floor "<<i<<" are Occupied ? " ;         //input user 
	 		cin>>Occupied;
			 
	 	     total+=r;      //continuoesly varring value because of (body)loop 
			  totaloccupied+=Occupied;
			  }	 		
	 		
	 		percentage =(totaloccupied*1.0f/total)*100.0f;        //formula 
	 		
	 		 cout<<"\nTotal number of rooms in your hotel : "<<total;
		     cout<<"\nThe percentage of occupied rooms will be "<<percentage;
			 
	 		//Termination
	 return 0;		
}
