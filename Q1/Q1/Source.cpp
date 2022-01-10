// Joshua Boyce Hyland
// ID: C00270917
// Took 1hr
// Date 13/12/21

#include <iostream>
#include <string>
#include <random>

int main()
{
	int random = 0; 
	int random_array[10];
	int count = 9; 
	std::string display = "."; 

	srand(time(nullptr)); // random seed 
	
	for (int index = 0; index <= 9; index++)
	{
		random = rand() % 11 + 5;
		random_array[index] = random; 
		std::cout << index << display << random<<std::endl; 
		
	}
	
	std::cout << std::endl;// creates space between lists 
	
	for (int index = 0; index <= 9; index++)
	{
		random = random_array[count]; 
		std::cout << count << display << random << std::endl; 
		count--; 
	}

	return 1; 
}