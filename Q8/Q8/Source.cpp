// Joshua Boyce Hyland
// ID: C00270917
// Time started 23:20
// Time finished 
// Date 03/01/22
//-----------------------------
// Program will store already set names and health for players, it will calculate the sum. average, display the players names and health, display the names and health in reverse order, find the highest and lowest health
// allow user to input a number and who ever has has the health will be displayed 
//----------------------------- 
//No known bugs 

#include <iostream>
#include <string>

const int MAX_PLAYERS = 8;
std::string namesArray[MAX_PLAYERS];
int healthArray[MAX_PLAYERS];
int calculateSum();
float calculateAvg(float t_sum);
void intitializeArrays();
void displayPlayers();
void displayReversePlayers();
void findHighestHealth();
void findLowestHealth();
void findAllHealthValue(int t_aValue); 

int main()
{
	int sum = 0;
	float average = 0;
	int aValue = 0; 


	intitializeArrays();

	sum = calculateSum();
	average = calculateAvg(sum);

	std::cout << " Sum player health: " << sum << std::endl;
	std::cout << " Average Player health: " << average << std::endl;

	displayPlayers();
	displayReversePlayers();
	findHighestHealth();
	findLowestHealth();

	std::cout << " Please enter a health value" << std::endl; 
	std::cin >> aValue; 
	findAllHealthValue(aValue); 
	return 1;
}



void intitializeArrays()// initiliazes the two arrays
{
	namesArray[0] = "Tom";
	namesArray[1] = "Sam";
	namesArray[2] = "Ann";
	namesArray[3] = "Ki";
	namesArray[4] = "Joe";
	namesArray[5] = "Ray";
	namesArray[6] = "Dave";
	namesArray[7] = "Sue";

	healthArray[0] = 3;
	healthArray[1] = 6;
	healthArray[2] = 2;
	healthArray[3] = 1;
	healthArray[4] = 4;
	healthArray[5] = 6;
	healthArray[6] = 1;
	healthArray[7] = 6;

}

int calculateSum()// find sum of all players health 
{
	int sum = 0;

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		sum = sum + healthArray[index];// sum
	}

	return sum;
}

float calculateAvg(float t_sum)// finds average of all players health
{
	float average = 0.0;

	average = t_sum / MAX_PLAYERS;// average

	return average;
}
void displayPlayers()
{
	std::cout << std::endl;
	std::cout << "Players" << std::endl;

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		std::cout << "Player: " << namesArray[index] << "    Health:" << healthArray[index] << std::endl;
	}
}

void displayReversePlayers()// displays players name in reverse
{
	std::cout << std::endl;
	std::cout << "Players reversed" << std::endl;

	for (int index = MAX_PLAYERS - 1; index >= 0; index--)// display 
	{
		std::cout << "Player: " << namesArray[index] << "    Health:" << healthArray[index] << std::endl;
	}
}

void findHighestHealth()// finda and displays last player with the highest health 
{
	int highest = 0;
	int highestHealth = 0;

	std::cout << std::endl;
	std::cout << "Highest health Player" << std::endl;

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		if (highestHealth <= healthArray[index])// finds the last highest number
		{
			highest = index;
		}
	}
	std::cout << "Player: " << namesArray[highest] << "    Health: " << healthArray[highest] << std::endl;

}

void findLowestHealth() // finds and displays the first lowest health player
{
	int smallest = 0;
	int smallestHealth = 0;

	std::cout << std::endl;
	std::cout << "Lowest health player" << std::endl;

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		if (index == 0)
		{
			smallestHealth = healthArray[index];// assigns first number as a point of comparision to find the lowest number
		}

		if (smallestHealth > healthArray[index])// finds lowest number
		{
			smallest = index;
		}


	}
	std::cout << "Player: " << namesArray[smallest] << "    Health:" << healthArray[smallest] << std::endl;
}


void findAllHealthValue(int t_aValue)
{
	bool inArray = false;// bool to activate error message 

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		if (t_aValue == healthArray[index])// finding value
		{
			std::cout << namesArray[index] << std::endl;
			inArray = true; 
		}
	}
	if(inArray == false)// error for if value not found
		{
			std::cout << "No player found with that health value" << std::endl; 
		}

}
