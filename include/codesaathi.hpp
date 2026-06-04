#pragma once

#include<iostream>
using namespace std;

inline int print_pattern_1 (int lines)
{
    for (int index = 0; index < lines; index++)
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
    if (a < b)
    {
        return a;
    }
    return b;
}