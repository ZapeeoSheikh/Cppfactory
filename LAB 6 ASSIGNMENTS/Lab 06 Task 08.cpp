//***************************( Lab 06 )********************************
//***************************( Task 07 )********************************
//-------(using all loops )--------
#include <iostream>
using namespace std;
main(){
	int firstNum , secondNum , sum=0;      //variable declaration
//**************************************************************************
//**********************( Using while loop )********************************
//**************************************************************************

cout<<"Enter your first number : ";  //input
cin>>firstNum;
cout<<"Enter your second number : ";
cin>>secondNum;

   while( firstNum > secondNum ){         //this loop is used so that if first number is greater then number 2 then loop continue asking enter values 
	cout <<"Re-enter your numbers (Remmember, first number must be smaller then second number)\n";
	cout<<"Enter your first number : ";
    cin>>firstNum;
    cout<<"Enter your second number : ";
    cin>>secondNum;
}

 
//---------------------------------------------------
int i = firstNum;
cout<<" Output of all odd numbers between number "<<firstNum<<" and number "<<secondNum<<" \n"	;
while ( i < secondNum )       //i works till 2nd value 
  {
    i++;                      //increment 
	if(!(i % 2 == 0))         //odd number formula
	{cout << i<< endl ;	}	
  }
  cout<<endl<<endl;
cout<<" Sum of all even numbers from "<<firstNum<<" to "<<secondNum<<" \n"	;

  i=firstNum ;
 // int sum=0 stored earlier;
  while ( i <= secondNum )
{
       if(i % 2 )       //even number formula 
              i++;


       else
        {  sum = sum + i++;  }     //even number addition 
}
cout <<"Sum : "<<sum;
cout<<endl<<endl;

//--------------------------------------------------
int sq_num=0;
cout<<"Square of 1 to 10 is :\n ";
  while ( sq_num < 10 )
{sq_num++;
cout<<sq_num<<"--->"<<sq_num*sq_num<<endl;      //square of the number
}

 //------------------------------------------------  
   cout<<endl<<endl;
cout <<"Output the sum of square of odd number :\n ";
int number=firstNum;
sum=0;
while(number < secondNum)
{
if(number % 2)
   {
    sum+=(number*number);
     number++;
    }
if(!(number % 2))
{
number++;
}              //sum of all odd numbers 
cout<<"Sum : "<<sum<<" \n";

}
//----------------------------------------------------
  cout<<endl<<endl;
cout<<"Output all upercase letters \n";
int c=65;
while(c<91)     //these have the standand values of upper case letter , increment of number will change the letter i.e 65 is for A 
{
cout<<char (c++)<<"\t";
}

//**************************************************************************
//************************( Using for loop )********************************
//**************************************************************************
cout <<"\n\n\n\n\t SAME PROGRAM USING FOR LOOP\n";
cout<<"Enter your first number : ";
cin>>firstNum;
cout<<"Enter your second number : ";
cin>>secondNum;

   while( firstNum > secondNum ){
	cout <<"Re-enter your numbers (Remmember, first number must be smaller then second number)\n";
	cout<<"Enter your first number : ";
    cin>>firstNum;
    cout<<"Enter your second number : ";
    cin>>secondNum;
}

 
//---------------------------------------------------
cout<<" Output of all odd numbers between number "<<firstNum<<" and number "<<secondNum<<" \n"	;
for ( int i = firstNum ; i < secondNum ;     i++)
  {
	if(!(i % 2 == 0))
	{cout << i<< endl ;	}	
  }
  cout<<endl<<endl;
cout<<" Sum of all even numbers from "<<firstNum<<" to "<<secondNum<<" \n"	;

  for ( int i=firstNum ; i <= secondNum ;  )
{
       if(i % 2 )
             
        i++ ;

       else
        {  sum = sum + i++;  }
}
cout <<"Sum : "<<sum;
cout<<endl<<endl;

//--------------------------------------------------
cout<<"Square of 1 to 10 is :\n ";
  for (int sq_num=0 ; sq_num < 10 ; sq_num++  )
{
cout<<sq_num<<"--->"<<sq_num*sq_num<<endl;
}

 //------------------------------------------------  
   cout<<endl<<endl;
cout <<"Output the sum of square of odd number :\n ";
sum=0;
for(int number=firstNum; number < secondNum; )
{
if(number % 2)
   {
    sum+=(number*number);
     number++;
    }
if(!(number % 2))
{
number++;
}
cout<<"Sum : "<<sum<<" \n";

}
//----------------------------------------------------
  cout<<endl<<endl;
cout<<"Output all upercase letters \n";
for(int c=65; c<91;)   
{
cout<<char (c++)<<"\t";
}

//**************************************************************************
//**********************( Using do-while loop )*****************************
//**************************************************************************
cout <<"\n\n\n\n\t SAME PROGRAM USING DO-WHILE LOOP\n";
cout<<"Use same numbers for better experience \n";
cout<<"Enter your first number : ";
cin>>firstNum;
cout<<"Enter your second number : ";
cin>>secondNum;

//it's not a part of task assigned thatwhy i have used while loop
   while( firstNum > secondNum ){
	cout <<"Re-enter your numbers (Remmember, first number must be smaller then second number)\n";
	cout<<"Enter your first number : ";
    cin>>firstNum;
    cout<<"Enter your second number : ";
    cin>>secondNum;
}

 
//---------------------------------------------------
cout<<" Output of all odd numbers between number "<<firstNum<<" and number "<<secondNum<<" \n"	;
do  {int i = firstNum;  //I is counter variable

    i+=2;
    }while ( i <= secondNum );

	if(firstNum % 2 == 0)
	{cout << i<< endl ;	}
	else
		{cout << i+1<< endl ;	}


  cout<<endl<<endl;
cout<<" Sum of all even numbers from "<<firstNum<<" to "<<secondNum<<" \n"	;

  i=firstNum ;
 // int sum=0;
do{
       if(i % 2 )
              i++;


       else
        {  sum = sum + i++;  }
}  while ( i <= secondNum );

cout <<"Sum : "<<sum;
cout<<endl<<endl;

//--------------------------------------------------
cout<<"Square of 1 to 10 is :\n ";
do{int sq_num=0;
sq_num++;
cout<<sq_num<<"--->"<<sq_num*sq_num<<endl;
}  while ( sq_num < 10 );

 //------------------------------------------------  
   cout<<endl<<endl;
cout <<"Output the sum of square of odd number :\n ";
//sum=0;
do{int number=firstNum;
if(number % 2)
   {
    sum+=(number*number);
     number++;
    }
if(!(number % 2))
{
number++;
}
cout<<"Sum : "<<sum<<" \n";

}while(number < secondNum);

//----------------------------------------------------
  cout<<endl<<endl;
cout<<"Output all upercase letters \n";
do{int c=65;
cout<<char (c++)<<"\t";
}while(c<91);   

//Terminate Program
  return 0; 
} 
