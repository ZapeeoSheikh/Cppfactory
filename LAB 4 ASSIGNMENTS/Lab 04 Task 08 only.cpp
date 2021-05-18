//Task 08(PC Price Calculator) 
#include <iostream>
using namespace std;
main()
{//VARIABLE 
int user,q=25000,
    k=39000,
	p=65000,
	lake=15000,
	press;
    //HEADER
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO CALCULATE THE PRICE OF PC HOTEL "<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	cout<<"***Press 1 for a queen bed , 2 for a king or 3 for a king and a pullout couch***";
	//user input
	 cin>>user;

	 if (user==1)   //first user input 
	 {cout<<"PRICE OF QUEEN BEDROOM IS: "<<q<<endl;
	 	  cout<<"\nDO YOU WANT A LAKE VIEW OR A PARK VIEW ? \n   FOR LAKE VIEW PRESS 1 AND FOR PARK VIEW PRESS 2_:\n";
 cin>>press;
	 	 if(press==1)   //second user input 
	 {cout<<"LAKE VEIW PRICE IS ADDED TO A SELECTIVE ROOM \n SO THE TOTAL PRICE WILL BE: "<<q+lake;}
	 else if(press==2)
	 {cout<<"PARK VEIW PRICE IS ADDED TO A SELECTIVE ROOM \n SO THE TOTAL PRICE WILL BE: "<<q+lake;}}
	 
	 else if (user==2)  
	 {cout<<"PRICE OF KING BEDROOM IS: "<<k<<endl;
	 	  cout<<"\nDO YOU WANT A LAKE VIEW OR A PARK VIEW ? \n   FOR LAKE VIEW PRESS 1 AND FOR PARK VIEW PRESS 2_:\n";
cin>>press;
	 	 if(press==1)
	 {cout<<"LAKE VEIW PRICE IS ADDED TO A SELECTIVE ROOM \n SO THE TOTAL PRICE WILL BE: "<<k+lake;}
	 else if(press==2)
	 {cout<<"PARK VEIW PRICE IS ADDED TO A SELECTIVE ROOM \n SO THE TOTAL PRICE WILL BE: "<<k+lake;}}
	 
	 else if (user==3)
	 {cout<<"PRICE OF KING AND A PULLOUT COUCH: "<<p<<endl;
	 	  cout<<"\nDO YOU WANT A LAKE VIEW OR A PARK VIEW ? \n   FOR LAKE VIEW PRESS 1 AND FOR PARK VIEW PRESS 2 _:\n";
cin>>press;
	 	 if(press==1)
	 {cout<<"LAKE VEIW PRICE IS ADDED TO A SELECTIVE ROOM \n SO THE TOTAL PRICE WILL BE: "<<p+lake;}
	 else if(press==2)
	 {cout<<"PARK VEIW PRICE IS ADDED TO A SELECTIVE ROOM \n SO THE TOTAL PRICE WILL BE: "<<p+lake;}}
//invalid number	 
	 else
	 {cout <<"INAPPROPRIATE INVALID NUMBER \n PRICE IS : 0";}

//terminate 
return 0;
}
