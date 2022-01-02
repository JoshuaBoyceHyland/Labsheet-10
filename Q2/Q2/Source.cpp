// Joshua Boyce hyland
// ID: C00270917
// Time started 21:18
// Time finished 21:38
// Date 02/01/22
//----------------------------------------
// Program will take in double to array of 10 and allow for user to enter 10 numbers and be given back how many odds and evens they entered
//----------------------------------------
// No known bugs

#include <iostream>
#include <cmath>

int main()
{
	int odd = 0; 
	int even = 0; 
	int num = 0; 
	double oddEven[10]; 
	
	std::cout << "Please enter 10 numbers" << std::endl; 
	for (int index = 0; index <= 9; index++)
	{
		std::cin >> oddEven[index]; 

		 num = (int)oddEven[index]; 

		if (num % 2 == 0)
		{
			even++; 
		}

		else
		{
			odd++; 
		}
	}

	std::cout << "There are " << even << " even numbers and " << odd << " odd numbers" << std::endl;
	return 0; 
}