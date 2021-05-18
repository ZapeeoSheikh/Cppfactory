#include <iostream>
//#include <iomanip>
//#include <string>

using namespace std;

int main ()
{

	double money = 0.0;
	double change = 0.0;
	int change1 = 0;
	int tdollars = 0;
	int fdollars = 0;
	int dollars = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies = 0;


	cout<<"Enter money: $";
	cin>>money;
	cout<<endl;

		change = money;
		change1 = change*100;
		tdollars = change1/1000;
		fdollars = change1/500;
		dollars = change1/100;
		quarters = change1%100/25;
		dimes = change1%100%25/10;
		nickels = change1%100%25%10/5;
		pennies = change1%100%25%10%5;
		
		{
		
		cout<<"Change due: $"<<change<<endl;
		cout<<"Tens: "<<tdollars<<endl;
		cout<<"Fives: "<<fdollars<<endl;
		cout<<"Dollars: "<<dollars<<endl;
		cout<<"Quarters: "<<quarters<<endl;
		cout<<"Dimes: "<<dimes<<endl;
		cout<<"Nickles: "<<nickels<<endl;
		cout<<"Pennies: "<<pennies<<endl;
		cout<<endl;
		cout<<endl;
	}

	//system("pause");
	return 0;
}
