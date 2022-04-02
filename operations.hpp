#pragma once
#include <string>

namespace es {
    //Concat STRING to STRING
    static void concat(std::string target_string, std::string joined_argument) {
        target_string += joined_argument;
    }
    //Concat CHAR to STRING
    static void concat(std::string target_string, char joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //Concat INT to STRING
    static void concat(std::string target_string, int joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //Concat FLOAT to STRING
    static void concat(std::string target_string, float joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //Concat DOUBLE to STRING
    static void concat(std::string target_string, double joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //Concat SHORT to STRING
    static void concat(std::string target_string, short joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //Concat LONG to STRING
    static void concat(std::string target_string, long joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //Concat BOOLEAN to STRING
    static void concat(std::string target_string, bool joined_argument) {
        target_string += std::to_string(joined_argument);
    }
    //DOES STRING contain CHAR
    static bool contains(std::string target_string, char argument) {
        int char_position = 0;

            char_position = target_string.find(argument);
        
        if(char_position != std::string::npos) {
            return true;
        } else {
            return false;
        }
    }
}