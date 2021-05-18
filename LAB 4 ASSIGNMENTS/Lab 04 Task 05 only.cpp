#include <iostream> 
using namespace std;
 main()
{ //variables
	int avg,r_1,r_2,r_3,r_4,r_5;
	
	//header
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO FIND THE SPEED OF QUALIFING RIDER"<<endl;
	cout <<"-------------------------------------------------------\n"<<endl;
	
	//user inputs 
  cout <<"Enter the const speed of rider 1: ";
  cin>>r_1;
  cout <<"Enter the const speed of rider 2: ";
  cin>>r_2;
  cout <<"Enter the const speed of rider 3: ";
  cin>>r_3;
  cout <<"Enter the const speed of rider 4: ";
  cin>>r_4;
  cout <<"Enter the const speed of rider 5: \n\n";
  cin>>r_5;
 
//conditions 
 if(r_1>r_2&&r_1>r_3&&r_1>r_4&&r_1>r_5)
 {cout<<"SPEED OF QUALIFING RIDER WILL BE: "<<r_1;}
 else if (r_2>r_1&&r_2>r_3&&r_2>r_4&&r_2>r_5)
 {cout<<"SPEED OF QUALIFING RIDER WILL BE: "<<r_2;}
 else if(r_3>r_1&&r_3>r_2&&r_3>r_4&&r_3>r_5)
 {cout<<"SPEED OF QUALIFING RIDER WILL BE: "<<r_3;}
 else if(r_4>r_1&&r_4>r_2&&r_4>r_3&&r_4>r_5)
 {cout<<"SPEED OF QUALIFING RIDER WILL BE: "<<r_4;}
 else if(r_5>r_1&&r_5>r_2&&r_5>r_3&&r_5>r_4)
 {cout<<"SPEED OF QUALIFING RIDER WILL BE: "<<r_5;}
 else
 cout <<"\n    INPUT ERROR";
    return 0;
    //terminate
}
