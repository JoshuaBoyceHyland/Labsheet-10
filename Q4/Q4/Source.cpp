// Joshua Boyce Hyland
// ID: C00270917
// Time started 
// Time finished 
// Date: 03/1/22
//---------------------------------
// Program will take in numbers and give back the highest and smallest number and how many times they appeared and also the sum and average of these numbers
//---------------------------------
// No known bugs 
#include <iostream>

void arrayCalculations(); 

int main()
{
	arrayCalculations(); 
	return 1;  
}

void arrayCalculations()
{
	int largest = 0; 
	int smallest = 0;
	int largeCount = 0; 
	int smallCount = 0; 
	int sum = 0; 
	int average = 0; 
	int array[8]; 

	std::cout << "Please enter 8 numbers" << std::endl; 

	for (int index = 0; index <= 7; index++)
	{
		std::cin >> array[index]; 

		if (index == 0)// assigns the numbers to variables so they can be compared 
		{
			largest = array[index]; 
			smallest = array[index]; 
		}
		//largest 
		if (largest < array[index])
		{
			largeCount = 0; // resets number if new higher number appears 
			largest = array[index]; 
		}
		if (largest == array[index])
		{
			largeCount++; // adds 1 to count if same numbers appears 
		}
		//smallest 
		if (smallest > array[index])
		{
			smallCount = 0; // resets number if smaller number appears 
			smallest = array[index]; 
		}
		if (smallest == array[index])
		{
			smallCount++;// adds 1 to count if same number appears 
		}
		sum = sum + array[index]; 
	}
	average = sum / 8; 

	// results 
	std::cout << "The largest number is " << largest << " and it occured " << largeCount << " times" << std::endl; 
	std::cout << "The smallest number is " << smallest << " and it occured " << smallCount << " times" << std::endl; 
	std::cout << "The sum of the numbers is: " << sum << std::endl; 
	std::cout << "The average of the numbers is: " << average << std::endl; 
}
