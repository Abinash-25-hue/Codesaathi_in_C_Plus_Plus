#pragma once

#include<iostream>
#include<cmath>
using namespace std;

inline void print_pattern_1 (int lines)
{
    for (int index = 1; index <= lines; index++)
    {
        for (int jindex = 0; jindex < index; jindex++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
}

inline auto find_smaller (auto a, auto b)
{
    double x = a, y = b;
    if (x < y)
    {
        return x;
    }
    return y;
}

inline auto find_greater (auto a, auto b)
{
    double x = a, y = b;
    if (x < y)
    {
        return y;
    }
    return x;
}

inline void print_fibonacci (int limit)
{
    int a = 0, b = 1, sum = 0;


    while (limit)
    {
        a = b;
        b = sum;
        cout<< sum<< " ";
        sum = a+b;
        limit--;
    }
    cout<< endl;
}

inline int count_digits_whole (auto number)
{
    int n = number, count = 0;
    while (n > 0)
    {
        n/=10;
        count++;
    }
    return count;
}

/*inline int count_digits (auto number)
{
    int n = number, count = 0, limit = 8;
    double floor = n, actual = number;
    //actual = round(actual);
    cout<< "actual = "<< actual<< ", floor = "<< floor<< endl;
    if (actual > floor)
    {
        int temp = actual;
        floor = temp;
        floor = ceil(floor);
        //while ((actual - floor) != 0)
        while (limit > 1)
        {
            count++;
            actual*=10;
            //int temp = ceil(actual);
            int temp = actual;
            floor = temp;
            //floor = ceil(floor);
            cout<< "Count = "<< count<< ", temp = "<< temp<<", floor = "<< floor<< ", actual = "<< actual<<endl;

            if (limit == 0)
            {
                actual -= (floor - 1);
                limit = 8;
            }
            
            if ((actual - floor) <= 1e-9)
            {
                cout<< "--broke--"<< endl;
                break;
            }
            limit--;
        }
    }
    while (n > 0)
    {
        n/=10;
        count++;
    }
    return count;
}*/

/*inline int count_digit (auto n)
{
    double num = n;
    string str = to_string(n);
    cout<< str<< endl;
}*/

inline bool check_palindrome (string str)
{
    if (str.size() == 0)
    {
        return false;
    }
    for (int index = 0; index < str.size()/2; index++)
    {
        if (str[index] != str[str.size() - index - 1])
        {
            return false;
        }
    }
    return true;
}

inline bool check_palindrome_2 (string str)
{
    if (str.size() == 0)
    {
        return false;
    }
    char a, b;
    for (int index = 0; index < str.size()/2; index++)
    {
        a = str[index];
        b = str[str.size() - index - 1];
        int ascii = a;
        if (ascii >= 65 && ascii < 91)
        {
            ascii += 32;
            a = ascii;
        }
        ascii = b;
        if (ascii >= 65 && ascii < 91)
        {
            ascii += 32;
            b = ascii;
        }

        if (a != b)
        {
            return false;
        }
    }
    return true;
}

inline bool check_prime (auto n)
{
    int num = n;
    if (is_same<decltype(n), int>::value != 1)
    {
        //cout<< "not int ";
        return false;
    }
    if (num < 2)
    {
        return false;
    }
    for (int index = 2; index < num - 1; index++)
    {
        if ((num % index) == 0)
        {
            return false;
        }
    }
    return true;
    
}