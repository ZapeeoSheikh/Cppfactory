//**********************( Lab 07 )****************************
//********************Task 09 ( Tic tac toe )**********************
#include <iostream>
using namespace std;
main(){
char board[]={'0','1','2','3','4','5','6','7','8'};
int player ,choice ;
char mark;
int above =choice+3;
int below =choice -3;
cout <<"\n\n\n";
for (int i=0 ; i<9 ; i++){

for (int j=0 ; j<9 ; j+=3){
	cout <<"\t\t\t_|__|__\n";
	cout <<"\t\t\t"<<board[j]<<"| "<<board[j+1]<<"| "<<board[j+2]<<"\n";
}

if (i%2==0){
player=1;
mark='X';
}
else
player=2;
mark='O';

cout <<"Select option Player "<<player<<" : ";
cin>>choice ;}

if (board[choice]==board [above]&&board[above ]==board[below])
{
	cout <<"Player "<<player<<"wins ";
	}



//Termination
	return 0;
}

