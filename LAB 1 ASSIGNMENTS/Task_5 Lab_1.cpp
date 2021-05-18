//task_5(sales prediction)
#include <iostream>
using namespace std;
main()
{ 
	 float total_sale,sale_of_year;
	 total_sale = 0.62;
	 sale_of_year= 680;
	 
	 cout<<"Percentage of total sale in decimal is: "<<total_sale <<endl;
	 cout<<"Sale of this year is:"<< sale_of_year<<" million"<<endl;
	 
	 cout<<"Predicted sale is:"<<total_sale*sale_of_year; 
	
return 0;	
}
