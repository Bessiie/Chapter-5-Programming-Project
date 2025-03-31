// Write a program that will predict the size of a population of organisms.
// The program should ask the user for the starting number of organisms, their average daily population increase (as a percentage),
// and the number of days they will multiply. A loop should display the size of the popluation for each day.
// Input Validation: Do not accept a number less than 2 for the starting size of the population.
// Do not accept a negative number for average daily population increase. Do not accept a number less than 1 for the number of days they will multiply.

#include <iostream>

int main() {
	
	//Variables
	double rateIncrease, daysOfGrowth, currentPopulation, dailyIncrease;
	//For loop counter
	int currentDay = 1;
	
	//Input for variables
	std::cout << "Enter the inital population count: \n";
	std::cin >> currentPopulation;
	std::cout << "Enter the population increase percentage: \n";
	std::cin >> rateIncrease;
	std::cout << "Enter the number of days for growth: \n";
	std::cin >> daysOfGrowth;
	
	//Error messages
	if (currentPopulation < 2) {
		std::cout << "Population cannot be less than 2.\n";
		return 1;
	}

	if (rateIncrease < 0) {
		std::cout << "Increase percent rate cannot be negative\n";
		return 1;
	}

	if (daysOfGrowth < 1) {
		std::cout << "Days of growth cannot be less than 1\n";
		return 1;
	}
	
	//Daily increase amount
	dailyIncrease = (rateIncrease/100) * currentPopulation;

	//Loop to display each day and population amount.
	for (int i = 0; i < (daysOfGrowth); i++) {
		std::cout << "Day " << currentDay << " population: " << currentPopulation << "\n";
		currentPopulation += dailyIncrease;
		currentDay += 1;
	}

	return 0;
}
