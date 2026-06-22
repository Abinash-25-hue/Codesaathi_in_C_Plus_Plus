#pragma once

#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
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
    if (n == 0)
    {
        return 1;
    }
    if (n < 0)
    {
        n = -(n);
    }
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

inline int count_vowel (string st)
{
    int count = 0, ascii;
    for (int index = 0; index < st.size(); index++)
    {
        char c = st[index];
        ascii = c;
        if (ascii >= 65 && ascii < 91 )
        {
            ascii += 32;
            c = ascii;
        }
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            count++;
        }
    }
    return count;
}

inline int count_consonant (string st)
{
    int count = 0, ascii;
    for (int index = 0; index < st.size(); index++)
    {
        char c = st[index];
        ascii = c;
        if (ascii >= 65 && ascii < 91)
        {
            ascii += 32;
            c = ascii;
        }

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && ascii >= 97 && ascii < 123)
        {
            count++;
        }
    }
    return count;
}

inline int count_words (string st)
{
    bool is_word = false;
    int count = 0;
    for (int index = 0; index < st.size(); index++)
    {
        if (st[index] == ' ')
        {
            if (is_word == true)
            {
                //cout<< " ";
                is_word = false;
                //count++;
            }
        }
        else if (st[index] != ' ')
        {
            if (is_word == false)
            {
                is_word = true;
                //cout<< st[index];
                count++;
            }
        }
    }
    return count;
}

inline bool is_alphanum (char c)
{
    if (('A' <= c && c <='Z') || ('0' <= c && c <= '9') || ('a' <= c && c <= 'z'))
    {
        return true;
    }
    return false;
}

inline string to_lowercase (auto st)
{
    string final;
    if ((is_same<decltype(st), string>::value != 1) && (is_same<decltype(st), char[]>::value != 1) && (is_same<decltype(st), char>::value != 1))
    {
        return "";
    }
    else
    {
        final = st;
        for (int index = 0; index < final.size(); index++)
        {
            if (final[index] >= 'A' && final[index] <= 'Z')
            {
                char c = final[index] + 'a' - 'A';
                final[index] = c;
            }
        }
    }

    
    return final;
}

inline string to_uppercase (auto st)
{
    string final;
    if ((is_same<decltype(st), string>::value != 1) && (is_same<decltype(st), char[]>::value != 1) && (is_same<decltype(st), char>::value != 1))
    {
        return "";
    }
    else
    {
        final = st;
        for (int index = 0; index < final.size(); index++)
        {
            if (final[index] >= 'a' && final[index] <= 'z')
            {
                char c = final[index] - ('a' - 'A');
                final[index] = c;
            }
        }
    }

   return final;

}

inline bool valid_equation (auto st)
{
    //stack <char> s;
    if ((is_same<decltype(st), string>::value != 1) && (is_same<decltype(st), char[]>::value != 1) && (is_same<decltype(st), char>::value != 1))
    {
        return false;
    }
    else
    {
        stack <char> s;
        for (int index = 0; index < st.size(); index++)
        {
            //char c = st[index];
            if (st[index] == '(' || st[index] == '{' || st[index] == '[')
            {
                s.push(st[index]);
            }
            if (st[index] == ')' || st[index] == '}' || st[index] == ']')
            {
                if (s.empty() == true)
                {
                    return false;
                }
                if (s.top() == '(' && st[index] == ')' )
                {
                    s.pop();
                }
                else if (s.top() == '{' && st[index] == '}')
                {
                    s.pop();
                }
                else if (s.top() == '[' && st[index] == ']')
                {
                    s.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        if (s.empty())
        {
            return true;
        }
        return false;
        
    }
}

inline bool check_armstrong_number (auto n)
{
    int sum = 0, num;
    if ((is_same<decltype(n), string>::value == 1) || (is_same<decltype(n), char[]>::value == 1) || (is_same<decltype(n), char>::value == 1))
    {
        return false;
    }
    else
    {
        int temp;
        num = n;
        if (num < 0)
        {
            return false;
        }
        int size = count_digits_whole(num);
        //cout<< size<< endl;
        while (num > 0)
        {
            temp = num % 10;
            int org = temp;
            for (int index = 0; index < size - 1; index++)
            {
                temp *= org;
            }
            sum += temp;
            num /= 10;
            //cout<< "temp = "<< temp<< ", org = "<< org<< ", sum = "<< sum<< endl; 
        }
    }
    if (sum == int(n))
    {
        return true;
    }
    return false;
}

inline bool check_perfect_number (auto n)
{
    int sum = 1, num = 0;
    if (is_same<decltype(n), string>::value == 1 || is_same<decltype(n), char>::value == 1 || is_same<decltype(n), char>::value == 1)
    {
        return false;
    }
    else
    {
        num = n;
        if (num < 0)
        {
            return false;
        }
        for (int index = 2; index < num - 1; index++)
        {
            if (num % index == 0)
            {
                sum += index;
            }
        }
    }
    if (sum == num)
    {
        return true;
    }
    return false;
}