//**********************( Lab 09 )****************************
//********************Task 05 ( MATRICES Addition )**********************
#include <iostream>
using namespace std;

int main()
{
    int  a[100][100], b[100][100], sum[100][100] ;
    int row1 , column1 , row2 , column2 ;
    
    cout << "Enter number of rows and columns of 1st Matrix (between 1 and 100): ";
    cin >> row1>>column1;

    cout << "Enter number of rows and columns of 2nd Matrix (between 1 and 100): ";
    cin >> row2>>column2;
    
    while (column1!=column2 && row1 !=row2)
    {
        cout << "\nError! column of first matrix not equal to row of second.\n\n";

        cout << "Enter rows and columns for first matrix: ";
        cin >> row1 >> column1;

        cout << "Enter rows and columns for second matrix: ";
        cin >> row2 >> column2;
    }

    cout << endl << "Enter elements of 1st matrix: " << endl;

    // Storing elements of first matrix entered by user.
    for(int i = 0; i < row1; ++i)
       for(int j = 0; j < column1; ++j)
       {
           cout << "Enter element a" << i + 1 << j + 1 << " : ";
           cin >> a[i][j];
       }

    // Storing elements of second matrix entered by user.
    cout << endl << "Enter elements of 2nd matrix: " << endl;
    for(int i = 0; i < row2; ++i)
       for(int j = 0; j < column2; ++j)
       {
           cout << "Enter element b" << i + 1 << j + 1 << " : ";
           cin >> b[i][j];
       }

    // Adding Two matrices
    for(int i = 0; i < row1; ++i)
        for(int j = 0; j < column2; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    // Displaying the resultant sum matrix.
    cout << endl << "Sum of two matrix is: " << endl;
    for(int i = 0; i < row1; ++i){
        for(int j = 0; j < column2; ++j)
        {
            cout << sum[i][j] << "  ";
        }
         cout << endl;

}
    return 0;
}
