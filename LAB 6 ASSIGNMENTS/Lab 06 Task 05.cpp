//***************************( Lab 06 )********************************
//***************************( Task 05 )********************************
//-------(Barchart)--------
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
for(int i = 0 ; i < ali ; i++ )
{cout<<"*";}
cout<<endl;
//-------------------------
cout<<"Foo : ";
for(int j = 0 ; j < foo ; j++ )
{cout<<"*";}
cout<<endl;

//-------------------------
cout<<"Cal : ";
 for(int k = 0 ; k < cal ; k++ )
{cout<<"*";}
cout<<endl;

//-------------------------
cout<<"Dan : ";
for(int l = 0 ; l < dan ; l++ )
{cout<<"*";}
cout<<endl;

//-------------------------
cout<<"Zoo : ";
for(int m = 0 ; m < zoo ; m++ )
{cout<<"*";}
cout<<endl;

//Terminate Program
  return 0; 
}
