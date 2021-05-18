//**********************( Lab 08 )****************************
//********************Task 02 ( Falling Distance )**********************
#include <iostream>
using namespace std;

double fallingDistance (int objectfallingtime );  //Declaration  
const float g = 9.8 ;

//function prototyping 
main(){
int objectfallingtime , distance ;


cout <<"\tTime\t\tDistance\n";
cout <<"__________________________________\n\n"; 


for (objectfallingtime =1 ; objectfallingtime<=10  ; objectfallingtime++){
	
	cout << "\t" << objectfallingtime << "\t\t" << fallingDistance (objectfallingtime )<<endl ;  //calling function 
}

	return 0;
}


//Prototyping 
double fallingDistance (int objectfallingtime )
{
	
return ( 0.5 * g * objectfallingtime * objectfallingtime);

}
