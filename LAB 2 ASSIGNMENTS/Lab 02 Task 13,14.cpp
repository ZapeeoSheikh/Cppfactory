//TASK 13(Interest Earned)
 #include <iostream>
  #include <cmath>
using namespace std;
main(){
{
    // Variables
    double intrest_rate=0.0425, //use instead of float for pressicion
           saving;
    //Constant variables
    const int time=12,
              principal=1000;
              
    double intrest; //instead of int
    // Explain program, ask user to press enter to continue
    cout << endl;
    cout << "---------------------------------------------------";
    cout << "\n Program that ask for the principal,the interest rate, \n";
    cout << " and the number of times the interest is compounded." << endl;
    cout << "---------------------------------------------------";
    cout << "\n\nPress Enter to continue." << endl;
    cin.get();
    //STORE ALL DECLEARED VALUES
    cout<<"Principal balance: "<<principal<<endl;
    cout<<"Intrest Rate: "<<intrest_rate<<endl;
    cout<<"Time compounded: "<<time<<endl<<endl;
    
    //This is the formula of this program (principal*((1+(intrest_rate/time))^time))
    
    //Finding intrest
    intrest=intrest_rate*principal;
    cout<<"Intrest : "<<intrest<<endl;
    
    //finding saving
    saving=(principal*pow(1 + (intrest_rate/time),time));
    
    cout<<"Saving : "<<saving<<endl;
   
}
//--------------------------------------------------------------------------------------
//TASK 14 (Monthly Payments)
 #include <iostream>

using namespace std;
{
    // Variables
    double m_pay,
	       p_back=11957.15,
	       i_pay=1957.15,
		   rate=0.01;
    //constant variable 
    const int loan=10000,
              no=36;
              
    
    cout<< endl;
    cout<< "---------------------------------------------";
    cout<< "\nThis program calculates the monthly";
    cout<< " payment on a loan." << endl;
    cout<< "---------------------------------------------"<<endl;
    cout << "\n\nPress Enter to continue." << endl;
    cin.get();
    
cout<<"Loan Amount : "<<loan<<endl;
cout <<"Monthly intrest rate : "<<rate<<endl;
cout<<"Number of Payments : "<<no<<endl;
cout<<"Amount paid back : "<<p_back<<endl;
cout<<"Intrest paid : "<<i_pay<<endl;

 // generate the exact amount
	m_pay = (rate * pow(1+rate, no))
	                 / (pow(1+rate, no) - 1)
	                 * loan;
cout<<"Monthly Payments : "<<m_pay;
  
    return 0;
}
// Terminate Program
    return 0;
}
