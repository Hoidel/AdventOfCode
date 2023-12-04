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
        for (std::string::size_type i = 0; i < line.size(); i++) {
            std::cout << "i is nu: " << i << std::endl;
            //std::cout << line[i] << std::endl;
            if (isdigit(line[i]))
            {
                std::cout << "First Digit: " << line[i] << std::endl;
                number += cToInt(line[i]) * 10;
                break;
            }
            else if (line.substr(i, 3).compare("one") == 0) {
                number += 1 * 10;
                break;
            }
            else if (line.substr(i, 3).compare("two") == 0) {
                number += 2 * 10;
                break;
            }
            else if (line.substr(i, 3).compare("six") == 0) {
                number += 6 * 10;
                break;
            }
            else if (line.substr(i, 4).compare("four") == 0) {
                number += 4 * 10;
                break;
            }
            else if (line.substr(i, 4).compare("five") == 0) {
                number += 5 * 10;
                break;
            }
            else if (line.substr(i, 4).compare("nine") == 0) {
                number += 9 * 10;
                break;
            }
            else if (line.substr(i, 5).compare("three") == 0) {
                number += 3 * 10;
                break;
            }
            else if (line.substr(i, 5).compare("seven") == 0) {
                number += 7 * 10;
                break;
            }
            else if (line.substr(i, 5).compare("eight") == 0) {
                number += 8 * 10;
                break;
            }
        }

        for (std::string::size_type i = line.size() - 1; i >= 0; --i) {
            std::cout << line[i] << std::endl;
            if (isdigit(line[i]))
            {
                std::cout << "Last Digit: " << line[i] << std::endl;
                number += cToInt(line[i]);
                break;
            }
            if (i < 2) 
            {
                continue;
            }
            else if (line.substr(i - 2, 3).compare("one") == 0) {
                number += 1 * 1;
                break;
            }
            else if (line.substr(i - 2, 3).compare("two") == 0) {
                number += 2 * 1;
                break;
            }
            else if (line.substr(i - 2, 3).compare("six") == 0) {
                number += 6 * 1;
                break;
            }
            if (i < 3)
            {
                continue;
            }
            else if (line.substr(i - 3, 4).compare("four") == 0) {
                number += 4 * 1;
                break;
            }
            else if (line.substr(i - 3, 4).compare("five") == 0) {
                number += 5 * 1;
                break;
            }
            else if (line.substr(i - 3, 4).compare("nine") == 0) {
                number += 9 * 1;
                break;
            }
            if (i < 4)
            {
                continue;
            }
            else if (line.substr(i - 4, 5).compare("three") == 0) {
                number += 3 * 1;
                break;
            }
            else if (line.substr(i - 4, 5).compare("seven") == 0) {
                number += 7 * 1;
                break;
            }
            else if (line.substr(i - 4, 5).compare("eight") == 0) {
                number += 8 * 1;
                break;
            }
        }
        std::cout << number << std::endl;
        total += number;
    }
    std::cout << "Total Sum : " << total << std::endl;
}