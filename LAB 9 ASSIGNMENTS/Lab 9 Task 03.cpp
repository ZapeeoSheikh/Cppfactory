//**********************( Lab 09 )****************************
//********************Task 03 ( 2-D Array )**********************
#include <iostream>
#include <iomanip>
using namespace std;
const int ROWS=4;
const int COLS=5;



int getTotal(int [ROWS][COLS], int, int);
double getAverage(int [ROWS][COLS], int, int);
int getRowTotal(int [ROWS][COLS], int);
int getColumnTotal(int [ROWS][COLS], int);
int getHighestInRow( int x[ROWS][COLS], int);
int getLowestInRow(int testArray[ROWS][COLS]  ,int ROWS );

int main()
{
// Array with test data
int testArray[ROWS][COLS] =
{ { 1, 2, 3, 4, 5 },
{ 6, 7, 8, 9, 10 },
{ 11, 12, 13, 14, 15 },
{ 16, 17, 18, 19, 20 }
};

  int num[ROWS][COLS];
  //Copy values from num array to test array
   for ( int i=0; i < ROWS ; i++)
       for(int j=0; j<COLS;j++)
          num[i][j] = testArray[i][j];

// Display the total of the array elements.
cout << "\nThe total of the array elements is "
<< getTotal(testArray, ROWS, COLS)
<< endl;

// Display the average of the array elements.
cout << "The average value of an element is "
<< getAverage(testArray, ROWS, COLS)
<< endl;

// Display the total of row 0.
cout << "The total of row 0 is "
<< getRowTotal(testArray,  COLS)
<< endl;

// Display the total of column 2.
cout << "The total of col 2 is "
<< getColumnTotal(testArray,  ROWS)
<< endl;

// Display the highest value in row 2. 
cout << "The highest value in row 2 is "
<< getHighestInRow(testArray,  COLS)
<< endl;

// Display the lowest value in row 2.
cout << "The lowest value in row 2 is "
<< getLowestInRow(testArray,  ROWS)
<< endl;

return 0;
}


int getTotal(int x[ROWS][COLS], int row, int col)
{
	int Total = 0;
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			Total += x[i][j];
		}
	}
	return Total;
}

double getAverage(int x[ROWS][COLS], int row, int col)
{ 
	for (int i =0; i < row; i++ )
	{
		for(int j = 0; j < col; j++)
		{
			x[ i ][j] = x[ i ][ j ];
		}
	}
	double Average = getTotal(x, row, col)/(row*col);
	return Average;
}

// accept two-dimensional array as first argument and 
// integer as second argument - second argument is subscript 
// of a column in array; return total of values in column 
// specified by subscript 
int getRowTotal(int x[ROWS][COLS], int row)

{ 
 int total = 0; 

 for (int i = 0; i < COLS; i++) 
	{ 
		total = total + x[row][i]; 
	} 

return total; 
} 
int getColumnTotal(int x[ROWS][COLS], int col)
{
	int colTotal = 0;

}

int getHighestInRow( int x[ROWS][COLS], int row)
{ 
	int high= 0; 
	int aux = 0;
	int total = 0;

	for (int i = 0; i < COLS; i++) 
	{ 
	aux = total + x[row][i]; 
	if( aux > high ) 
		{ 
			high = aux; 
		} 
	} 

return high; 
} 


 int getLowestInRow( int x[][COLS], int row)
 {
	 	int low= 0; 
	int aux = 0; 
	int total=0;

	for (int i = 0; i < COLS; i++) 
	{ 
	aux = total + x[row][i]; 
	if( aux > low ) 
		{ 
			low = aux; 
		} 
	} 

return low; 

 }
