#include <iostream >
using namespace std;
int main()
//*************************************PRACTICE OF LOOP IN THIS FILE**********************************************************
{
	cout <<"NUMBER TILL 10 WILL BE LISTED BELOW"<<endl;
	for (int i = 1; i<=10; i++){
	cout <<i<<endl;
	
	}
	cout <<endl<<endl;
		cout <<"EVEN NUMBER TILL 10 WILL BE LISTED BELOW"<<endl;
	for (int i = 2; i<=10; i++){
	cout <<i<<endl;
	i++;
	}	
	/*cout <<"PRIME NUMBER TILL 100 WILL BE LISTED BELOW";
	for (i =1; i<=100;){
		if(i%i=0  )
	cout <<i<<endl;
	i++;
	}*/
	//..................................................................
	
	
	//while loop
	cout<<endl<<endl;
	int i=1;
	while (i<=10)	
	{cout <<i<<endl;
	i++;
	}
	//....................................................................
	
	//do while loop
	cout <<endl<<endl;
	
	int j=1;
	do
	{cout<<"5 * "<<j<<" = "<<j*5<<endl;
	j++;
	}while(j<=10);
	
return 0;

}
