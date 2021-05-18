//***************************( Lab 06 )********************************
//***************************( Task 06 )********************************
//-------(Modify Barchart)--------
#include <iostream>
using namespace std;
main(){
	int ali ,foo,cal,dan,zoo;      //variable declaration    
	
	//inputs
	cout<<"Enter poins Earned by Ali : ";
	cin>>ali;
	
	cout<<"Enter poins Earned by Foo : ";
	cin>>foo;
	
	cout<<"Enter poins Earned by Cal : ";
	cin>>cal;
	
	cout<<"Enter poins Earned by Dan : ";
	cin>>dan;
	
	cout<<"Enter poins Earned by Zoo : ";
	cin>>zoo;
	
	cout <<endl<<endl;
	cout<<"Points For Game : \n";
	
	//loops for displaying every player score
	
cout<<"Ali : ";
ali/=10;           //here is the change (in order to make multiple of 10) ,number entered divide by 10
for(int i = 0 ; i < ali ; i++ )
{cout<<"*";}
cout<<endl;
//-------------------------
cout<<"Foo : ";
foo/=10;
for(int j = 0 ; j < foo ; j++ )
{cout<<"*";}
cout<<endl;

//-------------------------
cout<<"Cal : ";
cal/=10;
 for(int k = 0 ; k < cal ; k++ )
{cout<<"*";}
cout<<endl;

//-------------------------
cout<<"Dan : ";
dan/=10;
for(int l = 0 ; l < dan ; l++ )
{cout<<"*";}
cout<<endl;

//-------------------------
cout<<"Zoo : ";
zoo/=10;
for(int m = 0 ; m < zoo ; m++ )
{cout<<"*";}
cout<<endl;

//Terminate Program
  return 0; 
}
