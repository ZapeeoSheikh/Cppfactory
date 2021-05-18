//Task_11 (Energy Drink Consumption)
#include <iostream>
using namespace std;
main()
{
    float surveyed , one_or_more_purchased,citrus_fruit_drink;
	surveyed = 12467;
	one_or_more_purchased = 0.14;
	citrus_fruit_drink = 0.64;
	
	cout<<"Total Surveyed: "<<surveyed<<endl;
	//multiply surveyed to one_or_more_purchased and then multiply one_or_more_purchased peoples with citrus_fruit_drink
	cout<<"Approx no. of customer who purchased one or more drink per week: "<<surveyed*one_or_more_purchased<<endl;
	cout<<"Approx no of customer who prefer citrus drink: "<<(surveyed*one_or_more_purchased)*citrus_fruit_drink<<endl;
	
	
	
	return 0;
}
