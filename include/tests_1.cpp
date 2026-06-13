#include<iostream>
#include<bits/stdc++.h>
#include"codesaathi.hpp"
using namespace std;

int main ()
{
    /*print_pattern_1(5);

    

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


    /*            ---- This function has been removed for noe for further improvement ----
    // count_digits : counts the number of digits in numbers of all datatypes

    //cout<< integer_1<< " has "<< count_digits(integer_1)<< " digits."<< endl;
    //cout<< float_1<< " has "<< count_digits(float_1)<< " digits."<< endl;

    double a = 6789.0, c;
    int b = a;
    c = b;
    cout<< "a = "<< a<< ", b = "<< b<< ", c = "<< c<< endl;
    */

    /*cout<< count_digit(12);
    cout<< count_digit(12.345);*/


    // check_palindrome : checks if a string is a palindrome or not

    /*
    vector <string> vector_of_strings;

    vector_of_strings.push_back("abcba");   
    vector_of_strings.push_back("efghi");
    vector_of_strings.push_back("effe");
    vector_of_strings.push_back("abcd");
    vector_of_strings.push_back("");
    vector_of_strings.push_back("abcBa");
    vector_of_strings.push_back("EffE");
    vector_of_strings.push_back("a");
    vector_of_strings.push_back("\n");

    for (string st : vector_of_strings)
    {
        if (check_palindrome(st))
        {
            cout<< "True";
        }
        else
        {
            cout<< "False";
        }
        cout<< endl;

    }

    cout<< endl;

    vector <string> string_vector_2;
    string_vector_2.push_back("abcba");
    string_vector_2.push_back("aBcba");

    for (string st : string_vector_2)
    {
        if (check_palindrome_2(st))
        {
            cout<< "True";
        }
        else
        {
            cout<< "False";
        }
        cout<< endl;
    }
    cout<< endl;


    // check_prime: checks if an integer is prime, returns false for 0, 1, and all integers < 0, also returns 
    //              false for floating point numbers.

    vector <int> nums;
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(-1);
    nums.push_back(-2);
    nums.push_back(-3);
    nums.push_back(-4);
    nums.push_back(-5);
    

    for (int i : nums)
    {
        if (check_prime(i))
        {
            cout<< "True";
        }
        else
        {
            cout<< "False";
        }
        cout<< endl;
    }
    cout<< endl;

    if (check_prime(34.45))
    {
        cout<< "True";
    }
    else
    {
        cout<< "False";
    }
    cout<< endl<< endl;

    if (check_prime('a'))
    {
        cout<< "True";
    }
    else
    {
        cout<< "False";
    }
    cout<< endl;
    
    

    // count_vowel : counts the number of vowels in a string

    string alphabet = "abcdefghijklmnopqrstuvwxyz", alphabet_upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string empty_string = "", random_string = "aaaeeiiooou", random_string_2 = "4ax9JyUyi865Dr7yp";
    string random_string_3 = "wrvbwvhgpy5m5srvhzlpg";

    cout<< count_vowel(alphabet)<< endl;
    cout<< count_vowel(alphabet_upper_case)<< endl;
    cout<< count_vowel(empty_string)<< endl;
    cout<< count_vowel(random_string)<< endl;
    cout<< count_vowel(random_string_2)<< endl;
    cout<< count_vowel(random_string_3)<< endl<< endl;

    
    // count_consonant : counts the number of consonants in a string

    // Using the same test cases as count_vowel :-

    cout<< count_consonant(alphabet)<< endl;
    cout<< count_consonant(alphabet_upper_case)<< endl;
    cout<< count_consonant(empty_string)<< endl;
    cout<< count_consonant(random_string)<< endl;
    cout<< count_consonant(random_string_2)<< endl;
    cout<< count_consonant(random_string_3)<< endl<< endl;


    // count_words : counts words in a sentence, basically it counts the number of continuous characters 
    //               separated by white space (" ").

    string sentence = "The quick brown fox jumps over the lazy dog";
    string empty_sentence = "", one_word = "Programming";
    string crypted = " 8g*7t679b p&12=+67b 7g76V uh7T765d5hB_8IU97TR^Z4R  et7FD%$%3";

    cout<< count_words(sentence)<< endl;
    cout<< count_words(empty_sentence)<< endl;
    cout<< count_words(one_word)<< endl;
    cout<< count_words(crypted)<< endl;
    
    */


    // is_alphanum : checks if a character is an alphanumeric value.

    string test_string = "Marge, let's \"[went].\" I await {news} telegram.";

    cout<< endl<< test_string<< endl;
    for (int index = 0; index < test_string.size(); index++)
    {
        if (is_alphanum(test_string[index]))
        {
            cout<< "1";
        }
        else
        {
            cout<< "0";
        }
        
    }
    
    cout<< endl<< endl;

    
    // to_lowercase : converts uppercase letters to lowercase.

    string st = " AbCdEffG 68 _#TesTiNG \"Hello\" ";
    cout<< to_lowercase(st)<< endl;

}