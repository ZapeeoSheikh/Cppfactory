//*****************( Final Semester Project )****************************
//*********************    Dictionary    ********************************
/* Group members
    ..Muhammad Rameez ( 90-bscs-20)
  Section C
  Semester 01
   
  */
#include <iostream>
#include <Windows.h>

using namespace std;
void StartScreen();//To Display starting screen

main(){
string word[10000]={"ancestor" ,"black" , "beautiful" , "chubby" };
string synonyms[10000]={"forefather" ,"dark" , "pretty" , "fat" };
string enterWord;
char user;
StartScreen();

cout <<" This is the scope of This Dictionary :\n";
cout <<"[ ancestor , black , beautiful , chubby , forefather , dark , pretty , fat ]\n\n" ;
do{
cout <<"Enter the word (use lower case)  :\n ";
cin>>enterWord;
cout<<endl;
for (int i=0 ; i<4 ;i++){
	

if(enterWord == word[i]){
	
	cout <<"Synonyms is : "<<synonyms[i];
}
else if(enterWord == synonyms[i]){
	
	cout <<"Synonyms is : "<<word[i];
}

}

cout <<"\nDo you want to check another word (if yes then press y key)\n";
cin>>user;
}while( user == 'y' || user == 'Y' );

//Termination
	return 0;
}
void StartScreen() {
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t";
	cout << "_________  ___  ________  _______   _________    _________\n";
	cout << "\t\t\t\t\t|        |  |  |             |    /         \   /         |    \n";
	cout << "\t\t\t\t\t|        |  |  |             |    |         |  |         |    \n";
	cout << "\t\t\t\t\t|        |  |  |             |    |         |  |         |    \n";
	cout << "\t\t\t\t\t|        |  |  |             |    |---------   |         |    \n";
	cout << "\t\t\t\t\t|        |  |  |             |    |         |  |         |    \n";
	cout << "\t\t\t\t\t|________/ ___ |________     |    |_________/  |_________/   X \n";
	Sleep(1200);                                 
	system("CLS");              
}                            
//*******************( Sumbitted by Muhammad Rameez )*****************************
//*******************( Roll number # 90-bscs-20 || Section C)*********************
//*******************( Sumbitted to Dr. Muhammad Suffyan   )**********************
