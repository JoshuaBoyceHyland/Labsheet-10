// Joshua Boyce Hyland
// ID: C00270197
// Time started 22:03
// Time finished
// Date: 02/1/21
//----------------------------------------
// Program will intake 8 numbers from users and give back largest, smallest, sum and average
//----------------------------------------
// No known bugs

#include <iostream>

void arrayCalculations(); 

int main()
{
	arrayCalculations(); 
}

void arrayCalculations()
{
	int largest = 0; 
	int smallest = 0; 
	int sum = 0; 
	double average = 0; 
	int array[8]; 

	std::cout << "Please enter 8 numbers" << std::endl; 

	for (int index = 0; index <= 7; index++)
	{
		std::cin >> array[index]; 

		if (index == 0)// assigns first number so it can be compared to others
		{
			largest = array[index]; 
			smallest = array[index]; 
		}

		if (largest < array[index])
		{
			largest = array[index]; 
		}
		if (smallest > array[index])
		{
			smallest = array[index]; 
		}

		sum = sum + array[index]; 
	}
	
	average = sum / 8; 

	//results
	std::cout << "The largest numebr is:  " << largest << std::endl; 
	std::cout << "The smallest number is: " << smallest << std::endl; 
	std::cout << "The sum of  the numbers is: " << sum << std::endl; 
	std::cout << "The average of the numbers is: " << average << std::endl; 
 
}
