#include <iostream>
#include <cstdlib>   
#include <ctime>

int main() {
    // Seed random number generator
    std::srand(std::time(0));

    int secretNumber = std::rand() % 100 + 1; // Random number between 1 and 100
    int guess; //to store value for comparsion
    int guessCount = 0; //tracks times guess

    std::cout << "Guess the number (between 1 and 100): ";

    
    do {
        std::cin >> guess; //stores data
        ++guessCount; //increases guess count

        if (guess > secretNumber) {
            std::cout << "Too high, try again: ";
        }
        else if (guess < secretNumber) {
            std::cout << "Too low, try again: ";
        }

    } while (guess != secretNumber);

    std::cout << "Congratulations! You guessed it in " << guessCount << " attempts.\n";

    return 0;
}
