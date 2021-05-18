//Task-08 (Fat Gram Calculator)
#include <iostream>
#include <cmath>
using namespace std;
main(){
{
	//Variables
double calories,fat_grams ,percentage,calories_from_fat ,cpp;
cout <<"\n\n---------------------------------------------------------"<<endl;
cout<<"This program can calculate  the percentage of calories that come from fat  "<<endl;
cout <<"----------------------------------------------------------"<<endl;

cout <<"Enter the number of calories in food: ";
cin>>calories;
if (calories > 0)  //first of all if calories >0 then execute otherwise stop
{cout << "Enter the number of fat(in gram) in food: ";}
    cin >> fat_grams;
   if (fat_grams > 0)//if fat grams >0 then execute otherwise stop
        {calories_from_fat = fat_grams * 9;
            percentage = (calories_from_fat / calories) * 100;
            
            if (calories_from_fat >calories)    //condition of 30%
            {
                 cout<<"\n\nFat is too low.." << endl << endl;
            }
            else
            {
                cout << "Total calories                        = " << calories << " cal"<< endl;
                cout << "Total fat grams                       = " << fat_grams << " g" << endl;
                cout << "Total calories from fat               = " << calories_from_fat << " cal from fat"<< endl;
                cout << "Total percentage of calories from fat = " << percentage<< '%' << endl;
                cout << endl;
            }
        }
        else
        {
            cout << "We're sorry. Fat grams must be more than 0.\n";
            cout << "Please rerun the progarm and try again." << endl;
        }
    }

    return 0;
}
