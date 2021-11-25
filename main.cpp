/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Ryan Persad
 */


#include <iostream>
using namespace std;

int main() {
  int x;
    cout << "Type a number: ";
    cin >> x;
   
  string answer;
  answer = (x%2 == 0)? " is even" : " is odd";
  cout  << x << answer;
} 