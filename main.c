/*
*  UCF COP3330 Fall 2021 Assignment 5 Solution
*  Copyright 2021 Berkay Arslan
*/

#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter an integer value to determine whether it is odd or even: "; //Input a number
 cin >> n;
 if(n%2 == 0)
   cout << "The value " << n << " is an even number."; //Determines it is even
 else
   cout << "The value " << n << " is an odd number."; //Determines it is odd
 return 0;
}
