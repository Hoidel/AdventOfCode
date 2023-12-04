#include <iostream>
#include <string>

int cToInt(char c) {
    return c - '0';
}

int main()
{
    int total = 0;
    for (std::string line; std::getline(std::cin, line);) {
        std::cout << "Line: " << line << std::endl;

        int number = 0;
        for (std::string::size_type i = 0;  i < line.size(); ++i) {
            //std::cout << line[i] << std::endl;
            if (isdigit(line[i]))
            {
                std::cout << "First Digit: " << line[i] << std::endl;
                number += cToInt(line[i]) * 10;
                break;
            }            
        }

        for (std::string::size_type i = line.size() - 1; i >= 0; --i) {
            //std::cout << line[i] << std::endl;
            if (isdigit(line[i]))
            {
                std::cout << "Last Digit: " << line[i] << std::endl;
                number += cToInt(line[i]);
                break;
            }
        }
        std::cout << number << std::endl;
        total += number;
    }
    std::cout << "Total Sum : " << total << std::endl;
}