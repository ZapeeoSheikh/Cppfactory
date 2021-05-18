//**********************( Lab 07 )****************************
//********************Task 07 ( Lottery )**********************
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(int argc, char *argv[])
{
       int lottery[5];
       int user[5];
       bool allmatch = true;
       bool nomatch = true;
       int matchcount = 0;     
  srand (time(NULL));
  lottery[0] = rand() % 10;  //random numbers
  lottery[1] = rand() % 10;
  lottery[2] = rand() % 10;
  lottery[3] = rand() % 10;
  lottery[4] = rand() % 10;
 
  for(int i = 0; i < 5; i++)
  {
         cout <<"Enter a digit between 0 and 9: ";
cin>>user[i];
              while (user[i]<0 || user[i]>9)
              {
                     cout << "Error! Entry must be between 0 and 9: ";
                     cin >> user[i];
              }
  }
cout<<endl<<"Lottery array: ";
  for(int i = 0; i < 5; i++)
  {
         cout<<lottery[i];
         cout<<"|";
  }
cout<<endl<<endl<<"   User array: ";
  for(int i = 0; i < 5; i++)
  {
         cout<<user[i];
         cout<<"|";
  }
 
  for(int i = 0; i < 5; i++)
  {
         if(user[i] == lottery[i])
         {
               matchcount++;
               nomatch = false;
         }
     
         if(user[i] != lottery[i])
         {
               allmatch = false;
         }
  }
      if(nomatch == true)
         {
              cout<<endl<<endl<<"Sorry! No Match."<<endl;
         }
 
         if(allmatch == true)
         {
              cout<<endl<<endl<<"Congratulation! you are the grand prize winner."<<endl;
         }
    if(matchcount != 0)
       cout<<endl<<endl<<matchcount<<" Match"<<endl;
       return 0;
}
