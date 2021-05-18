//**********************( Lab 09 )****************************
//**************** Task 02 ( Monkey Business )*******************
#include <iostream>
using namespace std;

// 3 * 7 matrix
const int ROWS    = 3,
          COLUMNS = 7;


// Function Defination for Information declaration about the task
double inputValidate()
{
    double number;
    while(!(cin >> number) || number < 0)  //we use not operator to avoid negative values
    {
        cout << "Error, enter a positive number: ";
    }
    return number;
}


void getInfo(double array[][COLUMNS])  //Array as requied 
{
    cout << "\nEnter the following information, " << endl
         << "How many pounds of food eaten per day: " << endl;
    for(int row = 0; row < ROWS; row++)  //indicate row 
    {
        for(int column = 0; column < COLUMNS; column++)   //indicate column
        {
            cout << "Monkey #"    // monkey #1, on day 1: ..examplary
                 << (row + 1)
                 << ", on day "
                 << (column + 1)
                 << ": ";

            array[row][column] = inputValidate();
        }
        cout << endl;
    }
}

double getAverage(const double array[][COLUMNS])  //For Average calculation
{
    double columns_sum;
    int total_elements = ROWS * COLUMNS; // 21

    for(int row = 0; row < ROWS; row++)
    {
        for(int column = 0; column < COLUMNS; column++)
            columns_sum += array[row][column];
    }

    return columns_sum / total_elements;
}

double getLeast(const double array[][COLUMNS])
{
    double sum, 
           local_array[ROWS];

    for(int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for(int column = 0; column < COLUMNS; column++)
            sum += array[row][column];

        local_array[row] = sum;

    }

    double lowest_number = local_array[0];

    for (int number = 1; number < ROWS; number++)
    {
        if (local_array[number] <= lowest_number)
            lowest_number = local_array[number];
        
    }

    return lowest_number;
}

double getHighest(const double array[][COLUMNS])
{
    double sum, 
           local_array[ROWS];

    for(int row = 0; row < ROWS; row++)
    {
        sum = 0;
        for(int column = 0; column < COLUMNS; column++)
            sum += array[row][column];

        local_array[row] = sum;

    }

    double highest_number = local_array[0];
    for (int number = 1; number < ROWS; number++)
    {
        if (local_array[number] >= highest_number)
            highest_number = local_array[number];
        
    }
    
    return highest_number;
}

// here will start the main function 
int main()
{
    double pounds_of_food[ROWS][COLUMNS];
    double average_per_day,
           least_per_week,
           highest_per_week;

    getInfo(pounds_of_food);

    average_per_day = getAverage(pounds_of_food);
    cout << "\n__________________________________________________\n\n";
    cout << "Average amount eaten during the week per day = "
         << average_per_day
         << endl;

    least_per_week = getLeast(pounds_of_food);
    cout << "Lowest amount eaten during the week = "
         << least_per_week
         << endl;

    highest_per_week = getHighest(pounds_of_food);
    cout << "Highest amount eaten during the week = "
         << highest_per_week
         << endl
         << endl;

    return 0;
} // End int main()


