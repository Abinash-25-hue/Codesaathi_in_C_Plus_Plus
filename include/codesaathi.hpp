#pragma once

#include<iostream>
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

inline auto find_lesser (auto a, auto b)
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

inline int count_digits (auto number)
{
    
}