#include <string>
#include <map>
#include <iostream>
using namespace std;

int CC(int year)
{

    int t = year / 100;
    t = t % 4;

    if (t == 0)
        return 6;

    if (t == 1)
        return 4;

    if (t == 2)
        return 2;

    if (t == 3)
        return 0;
}

int MC(int month)
{
    map<int, int> m;

    m[1] = 0;
    m[2] = 3;
    m[3] = 3;
    m[4] = 6;
    m[5] = 1;
    m[6] = 4;
    m[7] = 6;
    m[8] = 2;
    m[9] = 5;
    m[10] = 0;
    m[11] = 3;
    m[12] = 5;

    return (m.find(month)->second);
}

int YC(int year)
{
    int t = year % 100;
    int t2 = t / 4;

    return (t + t2) % 7;
}

bool isLeapnJF(int month, int year)
{

    bool leap;

    if (year % 400 == 0)
        leap = true;

    else if (year % 100 == 0)
        leap = false;

    else if (year % 4 == 0)
        leap = true;

    else
        leap = false;

    bool JF;

    if (month == 1 || month == 2)
        JF = true;

    else
        JF = false;

    if (leap && JF)
        return true;

    else
        return false;
}

string dayOfTheWeek(int day, int month, int year)
{

    map<int, string> daysofweek;
    daysofweek[0] = "Sunday";
    daysofweek[1] = "Monday";
    daysofweek[2] = "Tuesday";
    daysofweek[3] = "Wednesday";
    daysofweek[4] = "Thursday";
    daysofweek[5] = "Friday";
    daysofweek[6] = "Saturday";

    int number = CC(year) + YC(year) + MC(month) + day;

    cout << "CC" << CC(year) << endl;
    cout << "MC" << MC(month) << endl;
    cout << "YC" << YC(year) << endl;

    if (isLeapnJF(month, year))
        number = number - 1;

    number = number % 7;

    return (daysofweek.find(number)->second);
}

int main()
{
    cout << dayOfTheWeek(9, 6, 2018);
    return 0;
}