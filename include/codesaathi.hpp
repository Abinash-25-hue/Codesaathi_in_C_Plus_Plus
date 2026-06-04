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