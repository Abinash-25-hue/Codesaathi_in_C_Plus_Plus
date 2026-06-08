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


    // print_fibonacci : this prints a sequence of fibonacci numbers as much as the argument

    int how_many_numbers_to_print = 10;
    print_fibonacci(how_many_numbers_to_print);


    // count_digits_whole : counts the number of digits in an integer, if a float number is given then 
    //                      then it only counts the whole part of the number.

    int integer_1 = 67;
    float float_1 = 11.11;

    cout<< integer_1<<" has "<< count_digits_whole(integer_1)<< " digits."<< endl;
    cout<< float_1<<" has "<< count_digits_whole(float_1)<< " digits."<< endl;


    // count_digits : counts the number of digits in numbers of all datatypes

    cout<< integer_1<< " has "<< count_digits(integer_1)<< " digits."<< endl;
    cout<< float_1<< " has "<< count_digits(float_1)<< " digits."<< endl;

    double a = 6789.0, c;
    int b = a;
    c = b;
    cout<< "a = "<< a<< ", b = "<< b<< ", c = "<< c<< endl;

}