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