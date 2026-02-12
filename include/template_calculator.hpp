#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // Implement this:
    T sum(T a, T b)
    {
        // Compute result for any type T that supports addition
        T res = a + b;

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
    T multiply(T a, T b)
    {
        // Compute the result for any type T that supports multiplication
        T res = a * b;

        // Log via injected logger (Dependency Injection principle)
        std::ostringstream stream;
        if (logger != NULL){
        logger->log(stream.str());
        }

        // Return result
        return res;
    }

private:
    Logger *logger;
};