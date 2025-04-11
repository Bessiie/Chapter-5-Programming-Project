#include <iostream>

int main() {
    // Pattern A: Increasing
    std::cout << "Pattern A:\n";
    //Determines the amount of rows to print
    for (int row = 1; row <= 10; ++row) {
        //Determines the amount of + to print
        for (int starAmount = 0; starAmount < row; ++starAmount) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    // Pattern B: Decreasing
    std::cout << "\nPattern B:\n";
    for (int row = 10; row >= 1; --row) {
        for (int starAmount = 0; starAmount < row; ++starAmount) {
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}