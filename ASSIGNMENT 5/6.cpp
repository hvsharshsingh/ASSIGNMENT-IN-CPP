#include <iostream>
#include <fstream>

int main() {
    // Creating and writing to a file
    std::ofstream outputFile("example.txt");

    // Check if the file is opened successfully
    if (outputFile.is_open()) {
        // Writing data to the file
        outputFile << "Hello, this is a line of text." << std::endl;
        outputFile << "This is another line of text." << std::endl;

        // Closing the file
        outputFile.close();
        std::cout << "File created and data written successfully." << std::endl;
    } else {
        std::cerr << "Unable to open the file for writing." << std::endl;
        return 1; // Return an error code
    }

    // Reading from the file
    std::ifstream inputFile("example.txt");

    // Check if the file is opened successfully
    if (inputFile.is_open()) {
        std::cout << "Reading data from the file:" << std::endl;

        // Reading and displaying each line from the file
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }

        // Closing the file
        inputFile.close();
    } else {
        std::cerr << "Unable to open the file for reading." << std::endl;
        return 1; // Return an error code
    }

    return 0;
}