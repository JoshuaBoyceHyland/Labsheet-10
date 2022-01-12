// Joshua Boyce Hyland
// ID: C00270917
// Time started 00:25
// Time finished 
// Date 04/01/22
//-----------------------------
// Program will store already set names and health for players, it will calculate the sum. average, display the players names and health, display the names and health in reverse order, find the highest and lowest health
// user can input a name and prgram will find the players health
// ----------------------------- 
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
std::string findPlayerHealth(std::string t_aName); 

int main()
{
	int sum = 0;
	float average = 0;
	std::string aName = ""; 
	std::string health = ""; 
	intitializeArrays();

	sum = calculateSum();
	average = calculateAvg(sum);

	std::cout << " Sum player health: " << sum << std::endl;
	std::cout << " Average Player health: " << average << std::endl;

	displayPlayers();
	displayReversePlayers();
	findHighestHealth();
	findLowestHealth();

	std::cout << "Please enter a name" << std::endl; 
	std::cin >> aName; 

	health = findPlayerHealth(aName);
	std::cout << health << std::endl; 
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
	namesArray[6] = "Sam";
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


std::string findPlayerHealth(std::string t_aName)// will take input from main and find the health of the player
{	
	std::string aMessage = ""; 
	bool found = false; 
	int position = 0; 

	for (int index = 0; index <= 7; index++)
	{
		if (t_aName == namesArray[index])
		{
			position = index; 
			found = true; 
			break; 
		}
	}

	
	if (found == true)
	{
		aMessage = "Players " + t_aName + " has a health of " +std::to_string (healthArray[position]); 
	}
	else
	{
		aMessage = "There is no player called " + t_aName + " in the game"; 
	}
	
	return aMessage; 
	
}
