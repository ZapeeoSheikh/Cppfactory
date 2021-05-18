//task_10 (stock commission)
#include <iostream>
using namespace std;
main()
{
    float total_share,price_per_share,commission;
    total_share = 600;
    price_per_share = 21.77;
    commission = 0.02;

    cout<<"Amount paid for stock: "<<total_share*price_per_share<<endl;
    cout<<"Amount of commission: "<<(total_share*price_per_share)*commission<<endl;
    //Simply add "amount paid for stock"+"Amount of commission" to get total amount
    cout<<"Total Amount: "<<((total_share*price_per_share)+(total_share*price_per_share)*commission)<<endl;


return 0;
}
