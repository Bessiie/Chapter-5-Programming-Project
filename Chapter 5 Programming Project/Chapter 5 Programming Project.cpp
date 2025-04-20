// Write a program that produces a bar chart for the population growth of a town. 
// The data is stored in intervals over the past several years, with the year and the population for that year (rounded to the nearest 1,000 people) in each line of the file.
// A test data file called People.txt has been provided. 
// The test file represents six 20-year intervals, but your program should be able to process any number of years and any interval.
// Also, do not assume that the data file will always be called People.txt. 
// program should ask for the name of the town and the name of the data file.
// The program should open the file and verify that it has opened with no errors.
// Then the program should read the year and the population figure and display the year and population on a bar chart.
// For each year, it should display the year and a bar consisting of one asterisk for each 1,000 people.

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string townName, fileName;
    int startYear, interval;

    // Get user input
    std::cout << "Enter the name of the town: ";
    std::getline(std::cin, townName);
    std::cout << "Enter the name of the data file: ";//file name is people.txt
    std::getline(std::cin, fileName);
    std::cout << "Enter the starting year: ";
    std::cin >> startYear;
    std::cout << "Enter the interval in years: ";
    std::cin >> interval;

    // File read error
    std::ifstream inputFile(fileName);
    if (!inputFile) {
        std::cout << "Error: Could not open the file '" << fileName << "'." << std::endl;
        return 1;
    }

    //Console Outputs
    std::cout << "\n" << townName << " Population Growth\n";
    std::cout << "(each * represents 1,000 people)\n";

    std::string line;

    //Reads data from People file
    if (std::getline(inputFile, line)) {
        std::istringstream iss(line); 
        
        //Variables
        int population;
        int year = startYear;

        //While loop that extracts data and stores in variable
        while (iss >> population) {
            std::cout << year << " ";

            //Math for stars
            int stars = population / 1000;
            
            //For loop for outputting stars
            for (int i = 0; i < stars; ++i) {
                std::cout << "*";
            }
            std::cout << std::endl;
            //Math for year interval increase
            year += interval;
        }
    }
    else {
        std::cout << "Error: Could not read data from the file." << std::endl;
    }

    inputFile.close();
    return 0;
}
