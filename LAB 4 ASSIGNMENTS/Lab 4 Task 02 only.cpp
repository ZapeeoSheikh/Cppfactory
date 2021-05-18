#include <iostream>
#include <cmath>
//#include <iomanip>
using namespace std;
main()
{
	cout <<"-------------------------------------------------------"<<endl;
	cout<<"THIS PROGRAM IS USED TO FIND THE POSITION OF AN OBJECT \n AFTER FALLING FOR 10 SECONDS"<<endl;
	cout <<"-------------------------------------------------------\n\n\n"<<endl;
	
	//user inputs 
	double a=-9.81 ,x;
int t=10,
    vi=0, 
    xi=0;
    
    x=0.5 *a*pow(t,2)+(vi*t+xi);
    cout <<"Position of an object after falling for 10 sec: "<<x;
    return 0;
}
