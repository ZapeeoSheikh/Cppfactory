//**********************( Lab 07 )****************************
//********************Task 10 ( Bubbles and insertion sort  )**********************
#include <iostream>
#include <iomanip>
using namespace std;
void printElements(int array[5], int size);

 main () {
 	
	// 	variables declarations
	int size, temp, current;
	
	//	User inputs
	cout<<"Enter size of an array for Bubble sort.\n";
	cin>>size;
	
	int numbers[size];
	for ( int i = 0; i < size; i++ )
	{
		cout<<"Enter "<<i + 1<< " element:\n";
		cin>>numbers[i];
	}
	
	//	to clear screen
	system ("CLS");
	
	//	Bubble sort
	for ( int i = 0; i < size-1; i++ )
	{
		for ( int j = 0; j < (size - 1) - i; j++)
		{
			if ( numbers[j] > numbers[j + 1] ){
				temp = numbers[j];
				numbers[j] = numbers[j+1];
				numbers[j+1] = temp;
			}	
		}
	}
	
	cout<<"Bubble Sort:\n";
	printElements(numbers, size);
	
	//	User inputs for Insertion sort
	cout<<"\nEnter size of an array for Insertion sort.\n";
	cin>>size;
	
	 numbers[size];
	for ( int i = 0; i < size; i++ )
	{
		cout<<"Enter "<<i + 1<< " element:\n";
		cin>>numbers[i];
	}
	
	//	to clear screen
	system ("CLS");
	
	
	//	Insertion Sort
	for ( int i = 1; i < size; i++ )
	{
		current = numbers[i];
		int j = i - 1;
		while ( j >= 0 && numbers[j] > current ){
			numbers[j+1] = numbers[j];
			j--;
		}
		
		numbers[j + 1] = current;
	}
	
	cout<<"\nInsertion Sort:\n";
	printElements(numbers, size);
	
	
	//	User inputs
	cout<<"\nEnter size of an array for Selection sort.\n";
	cin>>size;
	
//	numbers_1 array is declare for selecction sort
	int numbers_1[size];
	for ( int i = 0; i < size; i++ )
	{
		cout<<"Enter "<<i + 1<< " element:\n";
		cin>>numbers_1[i];
	}
	
	//	to clear screen
	system ("CLS");
	
//	Selection sort
	for ( int i = 0; i < size - 1; i++ )
	{
		current = i;
		for ( int j = i + 1; j < size; j++ ){
			if ( numbers_1[current] > numbers_1[j] )
				current = j;
		}
		temp = numbers_1[current];
		numbers_1[current] = numbers_1[i];
		numbers_1[i] = temp;
	}
	
	cout<<"\nSelection Sort:\n";
	printElements(numbers_1, size);
	
 }

 
 
	// functions
	//	print elements of array
	void printElements(int array[], int size){
		
	for ( int i = 0; i < size ; i++)
	{
		cout<<array[i]<<setw(5);
	}
	
	}
	
	
	
