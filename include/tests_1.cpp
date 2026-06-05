#include<iostream>
#include"codesaathi.hpp"
using namespace std;

int main ()
{
    print_pattern_1(5);

    double result = find_lesser(2, 3.8);
    cout<< find_lesser(2.6, 3)<< " is lesser."<< endl;
    cout<< find_greater(2.6, 3)<< " is greater."<< endl;
    cout<< find_lesser(3.1, 3.3)<< " is lesser."<< endl;
    cout<< find_greater(3.1, 3.3)<< " is greater."<< endl;

    print_fibonacci(10);

}