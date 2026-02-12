#include <sstream> // For log messages

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{
    // Compute result
    int res = a + b;

    // Build log message using string stream <sstream>
    std::ostringstream stream;
    stream << "taking the sum of: " << a << " and " << b << " which is " << res << std::endl;

    // Log via injected logger (Dependency Injection principle)
    if (logger != NULL){
        logger->log(stream.str());
    }

    // Return result
    return res;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    // Compute result
    int res = a * b;

    // Same principle as before
    std::ostringstream stream;
    stream << "taking the product of: '" << a << "' and '" << b << "' which is '" << res << std::endl;

    // Log using the injected strategy
    if (logger != NULL){
        logger->log(stream.str());
    }

    // Return result
    return res;
}