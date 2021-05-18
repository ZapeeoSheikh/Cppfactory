//Task-12 (Binary to Decimal Conversion)
#include <iostream>
using namespace std;
main()
{
	//Variables
 
int number,result,value;
const int decimal_result = 0 ,
          positional_value = 1 ;

//header
cout <<"\n\n---------------------------------------------------------"<<endl;
cout<<"This program can Binary to Decimal Conversion"<<endl;
cout <<"----------------------------------------------------------"<<endl;
//input
cout << "Enter a binary number (an integer containing only 0s and 1s): " ;
cin >> number ;
 while( number == 1 ||number ==0 ) // as long as there are digits remaining
    {const int digit = number%10 ; // extract the right most digit
        if( digit > 1 ) // sanity check
        {
         cout << "invalid binary digit " << digit << '\n' ;
        return 1 ; // failure, give up; return non-zero from the program
        }

        // add the positional value of the digit to the result
        if( digit == 1 ) 
		{
		result =decimal_result+ positional_value ;
        number /= 10 ; // and discard the rightmost digit
        value=positional_value * 2 ; // get the positional value of the next digit
    }

    cout << "decimal value: " << result << '\n' ;}
//i Dont know but i am unable to stop this program but result is accurate
//Terminate program
return 0;

}

