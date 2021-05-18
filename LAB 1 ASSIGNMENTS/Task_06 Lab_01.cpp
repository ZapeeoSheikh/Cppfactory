//task_06 (resturant bill)
#include <iostream>
using namespace std;
main()
{
	float meal,tax,tip;
	meal=4450;
	tax=0.0675;
	tip=0.15;
	
	cout<<"Meal cost: "<<meal<<endl;
	cout<<"Tax amount: "<<meal*tax<<endl;
	cout<<"Tip amount: "<<(meal+(meal*tax))*tip<<endl;
	//here is the total of resturant bill that include (meal+tax+tip)
	cout<<"Total Bill: "<<(meal+(meal*tax)+((meal+(meal*tax))*tip))<<endl;
	
return 0;
}
