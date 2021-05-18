//TASK 15 (Pizza PI)
 #include <iostream>
 #include <cmath>
using namespace std;
main(){
{
    // Variables
    double d,Area,r,PI;
    int no_slice;
    
    //header
    cout<< endl;
    cout<< "---------------------------------------------";
    cout<< "\nThis program calculates the number ";
    cout<< " of slices a pizza of any size." << endl;
    cout<< "---------------------------------------------"<<endl;
    
    //ask to the user
    cout <<"what is the diameter of Pizza (in inches) : ";
    cin>>d;
    r=d/2;    //r is the radius
    PI=3.14;  //PI is actually pie having standed value 
    Area=PI*r*r;  //Formula of area
    no_slice=Area/d;  //no_slice stands for number of slice 
    cout <<"Number of slices : "<<no_slice<<endl<<endl;

}
//----------------------------------------------------------------------------------
//Task 16 (How many Pizzas?)
#include <iostream>
#include <cmath>
using namespace std;

{ // Variables
    double d,Area,r,PI;    //double is used instead of float for pressicion
    int no_slice,p,pizzas_slices,no_pizzas;
    //constant variable 
const int p_p=4;
//header
cout<<endl;
cout<<"------------------------------------------------"<<endl;
cout <<"This Program will find the number of \n";
cout<<"pizzas if you need to buy, for a party. \n";
cout<<"------------------------------------------------"<<endl;
//Ask data for user
cout <<"Number of people who will be at the party : ";
cin>>p; //p stands for number of peoples who attend partty

cout <<"what is the diameter of Pizza (in inches) : ";
    cin>>d;
 r=d/2;    //r is the radius
    PI=3.14;  //PI is actually pie having standerd value 
    Area=PI*r*r;  //Formula of area
    no_slice=Area/d;  //no_slice stands for number of slice 
    cout <<"Number of slices : "<<no_slice<<endl;
    
    //p_p=4; //per person slice
     pizzas_slices=(p*(1 + (d/no_slice),p_p));   //calculated total slices for all poples
     
     no_pizzas =pizzas_slices/no_slice;   //calculated total pizzas for a partty
     cout<<"You need to buy total "<<no_pizzas<<" pizzas for a partty";

	return 0;
}  
//Terminate program
return 0;
}
