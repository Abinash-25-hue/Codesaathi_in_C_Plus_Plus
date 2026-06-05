#include<iostream>
#include"codesaathi.hpp"
using namespace std;

int main ()
{
    print_pattern_1(5);

    

    // find_lesser : finds the smaller number

    cout<< find_smaller(2.6, 3)<< " is lesser."<< endl;
    cout<< find_smaller(3.1, 3.3)<< " is lesser."<< endl;


    // find_greater : finds the greater number

    cout<< find_greater(2.6, 3)<< " is greater."<< endl;
    cout<< find_greater(3.1, 3.3)<< " is greater."<< endl;


    // print_fibonacci : this takes 

    int how_many_numbers_to_print = 10;
    print_fibonacci(how_many_numbers_to_print);

}