//***************************( Lab 06 )********************************
//***************************( Task 07 )********************************
//-------(Take My Quiz)--------
#include <iostream>
using namespace std;
main(){
	int Num=5 ,user ,correct_ans ,total_ques=5;      //variable declaration    
	string correct ="Congratulations , It's Right" ,
	        wrong ="Sorry , Wrong Answer" ;
	      //  double  percentage ;
cout<<"\t====================\n";	
cout<<"\t|  It's Quiz Time  |\n";
cout<<"\t====================\n";	

	//for displaying Questions one by one 
for(int i = 1 ; i <= Num  ; i++ )
{
    if(i==1){            //if i becomes 1 then show Question 1
	  {
	  cout<<"Question : 1\nTell me the name of task 1 (lab 06) ?";
	  cout<<"\n 1) Division " ; 
	  cout<<"\n 2) Factorial ";
	  cout<<"\n 3) Addition " ;
	  cout<<"\n 4 Substaction\n";  }
	  
	  cin>>user;
	  
	  cout<<"\n==========================\n";
	  if(user==2)
	  cout<<correct;
	  else
	  cout<<wrong;
	  cout<<"\n==========================\n";}
	  
//-------------------------------------------------------------------

	 if(i==2){             //if i becomes 2 then show Question 2
	  {
	  cout<<"\nQuestion : 2\nHow many rows are in triangle 'T' (Task02 _ Lab 06) ?";
	  cout<<"\n 1) 4   "; 
	  cout<<"\n 2) 5   ";
	  cout<<"\n 3) 6   ";
	  cout<<"\n 4) 7   \n";  }
	  cin>>user;
	  cout<<"\n==========================\n"; 
	  if(user==4)
	  cout<<correct;
	  else
	  cout<<wrong;
	  cout<<"\n==========================\n";
	  }
	  
//-------------------------------------------------------------------

	 if(i==3){            //if i becomes 3 then show Question 3
	  {
	  cout<<"\nQuestion : 3\nHow many task are there in Lab 06 ?";
	  cout<<"\n 1) 11   "; 
	  cout<<"\n 2) 10   ";
	  cout<<"\n 3) 6   ";
	  cout<<"\n 4) 7   \n";  }
	  cin>>user;
	  cout<<"\n==========================\n";
	  if(user==2)
	  cout<<correct;
	  else
	  cout<<wrong;
	  cout<<"\n==========================\n";
	  }
//-------------------------------------------------------------------

	 if(i==4){             //if i becomes 4 then show Question 4
	  {
	  cout<<"\nQuestion : 4\nWhat is the number of current Lab ?";
	  cout<<"\n 1) 4   "; 
	  cout<<"\n 2) 5   ";
	  cout<<"\n 3) 6   ";
	  cout<<"\n 4) 7   \n";  }
	  cin>>user;
	  cout<<"\n==========================\n";
	  if(user==3)
	  cout<<correct;
	  else
	  cout<<wrong;
	  cout<<"\n==========================\n";
	  }
//-------------------------------------------------------------------

	 if(i==5){             //if i becomes 5 then show Question 5
	  {
	  cout<<"\nQuestion : 5\nWhat is the name of this symbol * ?";
	  cout<<"\n 1) Hashtag   "; 
	  cout<<"\n 2) Dollar sign   ";
	  cout<<"\n 3) Asterisk   ";
	  cout<<"\n 4) Comma   \n";  }
	  cin>>user;
	  cout<<"\n==========================\n";
	  if(user==3)
	  cout<<correct;
	  else
	  cout<<wrong;
	  cout<<"\n==========================\n";
	  }
	  
	  }
//********************************************************************
//********************************************************************
cout <<"\n\nHow many of yours answer are correct ? ";
	 cin>>correct_ans ;
	  cout<<"\n\t\t========================\n\t\t|  Correct answers : "<<correct_ans
	  <<"  |\n\t\t========================\n";
	   //percentage = (correct_ans/5)*100 ;
	  cout <<"\nPercentage of correct answers : "<<double ((correct_ans/Num)*100 );
//Terminate Program
  return 0; 
} 
