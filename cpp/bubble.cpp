#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

void pause();
void BubbleSort( const char *array[], int size);

int main()
{
	int i = 0;
	const int arraySize = 20;	
	const char *characters[ arraySize ] = {'b','z','w','q','d','t','c','u','f','s','o','x','a','e','v','z','l','r','I','g'};
	
	//Original print out of listing of characters	 
	cout << "The original array of characters:\n\n";	 
	for ( i = 0; i < arraySize; ++i )         
		cout << characters[ i ] << "\n" ;	 
	pause();

	//Sort the array
	BubbleSort (characters, arraySize);

	//Print out of characters in alphabetical order
	cout << "The alphabetical listing of characters:\n\n";         
	for ( i = 0; i < arraySize; ++i )         
		cout << characters[ i ] << "\n" ;          
	pause ();	 
	return 0;
}//main

void BubbleSort( const char *array[], int size)
{
	    int result;    
		//Performs a run through number of strings	
		for ( int pass = 0; pass < size - 1 ; ++pass )
		{
			//Runs through each string for compare		
			for ( int j = 0; j < size - 1 - pass; ++j )
			{		
				//Perform string compare and return value store as result                
				result = strcmp (array[j], array[j+1]);		
				//If value is less than 0 then perform swap function to rearrange                
				if (result > 0)		   
					swap ( array[j] , array[j+1] );		
			}//for		 	
		}//for
}//BubbleSort

void pause ()
{    
	cout << "\nPress any key to continue...";    
	getch();    
	cout << "\r";    
	cout << "                            ";    
	cout << "\r";
}//pause 
