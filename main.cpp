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