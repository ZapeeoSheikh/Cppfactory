#include <iostream>
#include <iomanip>  //include iomanip library for precision commands
using namespace std;

//function prototype (used for compiler hint  )
float calculateRetail(float, float);  //Declaration     //signature 

int main(){
    //declare variables to store user input
    float wholesale, markupPercent ;

    //prompt user to enter values
    //and read from keyboard
    
    cout <<"Enter integer values \n";
	  //if we have to initialize desire data type then we have to use templete but here it is out of the scope 
	  
	  
    cout << "Please enter wholesale price:\n";
    cin >> wholesale;
    cout << "Please enter markup percentage:\n";
    cin >> markupPercent ;
    
    //validate input
    if(wholesale >= 0 && markupPercent >= 0){
        //format output
        cout << fixed << setprecision(2) << endl;   //setprecession is used to add selective spaces 

        //display final message and call function
        //with the data read as arguments
        cout << "The retail price is: " << calculateRetail(wholesale, markupPercent) << " Rs.\n";
        
    }
    else{
        //print error message
        cout << "Please run program again and use only ";
        cout << "positive values!\n";
    }
    return 0;
}

float calculateRetail(float wholesalePrice, float markupPercent)
{
    return (wholesalePrice + ((wholesalePrice/100) * markupPercent));
}

    

    
  
