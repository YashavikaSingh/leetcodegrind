#include <map>
#include <string>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

string converttoword(int number)
{

    map<int, string> units;
    units[1] = "one";
    units[2] = "two";
    units[3] = "three";
    units[4] = "four";
    units[5] = "five";
    units[6] = "six";
    units[7] = "seven";
    units[8] = "eight";
    units[9] = "nine";

    map<int, string> teens;
    units[11] = "eleven";
    units[12] = "twelve";
    units[13] = "thirteen";
    units[14] = "fourteen";
    units[15] = "fifteen";
    units[16] = "sixteen";
    units[17] = "seventeen";
    units[18] = "eighteen";
    units[19] = "nineteen";

    map<int, string> tens;
    units[1] = "ten";
    units[2] = "twenty";
    units[3] = "thirty";
    units[4] = "forty";
    units[5] = "fifty";
    units[6] = "sixty";
    units[7] = "seveny";
    units[8] = "eighty";
    units[9] = "ninety";

    map<int, string> placevalue;
    units[3] = "hundred";
    units[4] = "thousand";


    vector<int> digits;

    while (number != 0)
    {
        int d = number % 10;
        int number = number / 10;
        digits.push_back(d);
    }

    for (int i = 0; i < digits.size(); i++)
    {
        string word = units.find(digits[i])->second + placevalue;
    }
}

vector<string> fizzBuzz(int n)
{

    vector<string> answer;

    for (int i = 1; i < = n; i++)
    {
        if (n % 15 == 0)
        {
            answer.push_back("Fizzbuzz");
        }

        else if (n % 3 == 0)
        {
            answer.push_back("Fizz");
            continue;
        }

        else if (n % 5 == 0)
        {
            answer.push_back("Buzz");
            continue;
        }

        converttoword(i);
    }
}