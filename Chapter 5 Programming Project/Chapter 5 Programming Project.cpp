// A teacher has asked all her students to line up according to their first name.
// For example, in one class Amy will be at the front of the line, and Yolanda will be at the end. 
// Write a program that reads the student names from the file LineUp.txt. 
// The program should read names from the file until there is no more data to read.
// Once all the names have been read, it reports the number of students in the class, which student would be at the front of the line,
// and which one would be at the end of the line.
// You may assume that no two students have the same name.

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    std::ifstream fileLineUp("LineUp.txt");  // Declare and open the file

    if (!fileLineUp) {
        std::cout << "Error opening file!" << std::endl;
        return 1;  // Error code if file cannot be opened
    }

    std::vector<std::string> studentLineUp;  // Vector to store student names
    std::string nameStudent; // Student name
    
    //Reads file for names and places them into a vector
    while (std::getline(fileLineUp, nameStudent)) { 
        studentLineUp.push_back(nameStudent);
    }

    fileLineUp.close();  //Closes file

    std::cout << "Total number of students: " << studentLineUp.size() << std::endl;
    std::cout << "The student at the front of the line: " << studentLineUp.front() << std::endl;
    std::cout << "The student at the end of the line: " << studentLineUp.back() << std::endl;

    return 0;
}