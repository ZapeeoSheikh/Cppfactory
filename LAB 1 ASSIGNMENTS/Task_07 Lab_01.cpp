//Task_07 (Annual pay)
#include <iostream>
using namespace std;
main()
{
	float pay_amount , pay_period ;

	pay_amount = 5700.00;
	pay_period = 26;
	
	cout<<"Two week pay is: "<<pay_amount<<endl;
	cout<<"Pay Periods per year: "<<pay_period<<endl;
	//In order to find the total annual pay of employe you can multiply (pay*periods)
	cout<<"The Annual Pay of Employe is: "<<pay_amount*pay_period;
	
	
return 0;
}
