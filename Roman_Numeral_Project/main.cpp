#include <iostream>
#include <vector>


int main() {

    std::string inputNumeral;
    std::vector<std::string> numeralsList;
    std::vector<int> numeralsResult;
    int finalAnswer = 0;

    std::cout << "Input Roman Numeral: ";
    std::cin >> inputNumeral;

    // Checks if inputted numeral is less than 15 and greater than 0
    for(int y = 0; y <= inputNumeral.length(); y++)
    {
        if(y > 15) {
            std::cout << "Inputted Numeral is too long." << std::endl;
            return 0;
        }
        else if(y < 0)
        {
            std::cout<<"Inputted Numeral is too short." << std::endl;
            return 0;
        }
    }

    // Converts inputted number to Letters, puts them in a list
    for(char i : inputNumeral)
    {
        if(i == 'I' || i == 'i')
        {
            numeralsResult.push_back(1);
        }
        else if(i == 'V' || i == 'v')
        {
            numeralsResult.push_back(5);
        }
        else if(i == 'X' || i == 'x')
        {
            numeralsResult.push_back(10);
        }
        else if(i == 'L' || i == 'l')
        {
            numeralsResult.push_back(50);
        }
        else if(i == 'C' || i == 'c')
        {
            numeralsResult.push_back(100);
        }
        else if(i == 'D' || i == 'd')
        {
            numeralsResult.push_back(500);
        }
        else if(i == 'M' || i == 'm')
        {
            numeralsResult.push_back(1000);
        }
    }

    // Checks first number against second, if its smaller, minus, if bigger, adds it
    // "iv" check i against v. i smaller than v. 1 - 5 -> 4
    for(int x = 0; x < numeralsResult.size() - 1; x++)
    {
        if(numeralsResult[x] >= numeralsResult[x + 1]) {
            finalAnswer += numeralsResult[x];
        }
        else {
            finalAnswer -= numeralsResult[x];
        }
    }
    finalAnswer += numeralsResult[numeralsResult.size() - 1];

    if(finalAnswer > 3999)
    {
        std::cout<<"Answer can not be higher than 4000"<<std::endl;
        return 0;
    }
    else if(finalAnswer < 1)
    {
        std::cout<<"Answer can not be less than 1"<<std::endl;
        return 0;
    }
    else {
        std::cout<< "Answer: " << finalAnswer;
        return 0;
    }
}
