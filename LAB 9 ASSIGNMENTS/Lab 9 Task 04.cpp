//**********************( Lab 09 )****************************
//********************Task 04 ( MATRICES MULTIPLACTION )**********************
#include <iostream>
using namespace std;
int main(){

int row2 , column2 , row1 , column1;
int Arr1[10][10]  ;
int Arr2[10][10]  ;
int mul[10][10]   ;

cout <<"Enter the number of rows and colums of 1st matrix : \n";
cin >> row1 >> column1 ;

cout <<"\nEnter the number of rows and column of 2nd matrix: \n";
cin >> row2 >> column2 ;

while (column1!=row2)
    {
        cout << "\nError! column of first matrix not equal to row of second.\n\n";

        cout << "Enter rows and columns for first matrix: ";
        cin >> row1 >> column1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> row2 >> column2;
    }
    
    
//Storing elements of 1st matrix
cout <<"Enter the elements of 1st matrix : \n";
for(int i = 0 ; i < row1 ; i++)   //rows 
{
	for(int j = 0 ; j < column1 ; j++)   //column
	{
       cin >> Arr1[ i ] [ j ];
	}
}
//Storing elements of 2nd matrix
cout <<"Enter the elements of 2nd matrix : \n";
for(int i = 0 ; i < row2 ; ++i)   //rows 
{
	for(int j = 0 ; j < column2 ; ++j)   //column
	{
       cin >> Arr2[i][j];
	}
}

cout << system("Pause");

//Display 1st  matrix
cout <<"\n 1st matrix : \n";
for(int i = 0 ; i < row1 ; i++)   //rows 
{
	for(int j = 0 ; j < column1 ; j++)   //column
	{
       cout << Arr1[i][j] << " ";
	}
	
	cout << endl ;
}


//Display 2nd  matrix
cout <<"\n 2nd matrix : \n";
for(int i = 0 ; i < row2 ; i++)   //rows 
{
	for(int j = 0 ; j < column2 ; j++)   //column
	{
       cout << Arr2[i][j] << " ";
	}
		cout << endl ;

}


//Multiplication of 2 matrices 
cout <<"\n Multiplication of 2 matrix is : \n";
for(int i = 0 ; i < row1 ; i++)   //rows 
{
	for(int j = 0 ; j < column2 ; j++)   //column
	{
		for(int k = 0 ; k < column2 ; k++)   //column
		{
		 mul[i][j] += Arr1[i][k]	* Arr2[k][j] ;
		}	           
	}
	
//Displying Multipliction
	for (int i = 0 ; i < row1 ; i++ )
	{
		for (int j = 0 ; j < column2 ; j++ )	
		{
		  cout <<mul[i][j] << " " << endl ;
		}	
			cout << endl ;

	}

}
//Termination
	return 0;
}

