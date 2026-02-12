#include "file_logger.hpp"
#include <fstream>
#include <iostream>

// Implement this:
FileLogger::FileLogger(std::string filename) // Constructor
{
    // Open the file in append mode so previous logs are not deleted
    logfile.open(filename, std::ios::app);
}

// Implement this:
void FileLogger::log(std::string msg) // Log function
{
    // Print log message
    logfile << msg;
}

// Implement this:
FileLogger::~FileLogger() // Destructor
{
    // Close file when the object is destroyed
    logfile.close();
}