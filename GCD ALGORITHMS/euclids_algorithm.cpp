#include<bits/stdc++.h>
using namespace std;

//Function returning gcd of two entered numbers
//Euclids algorithm to find GCD of two numbers
int gcd(int big, int small) {
  int rem = 1;
  while(1) {
    rem = big % small;
    if(rem == 0)
      return small;
    else {
      big = small;
      small = rem;
    }
  }
}

int main() {
  int big, small;
  cout << "Enter first number: ";
  cin >> big;
  cout << "Enter second number: ";
  cin >> small;
  if(big < small) {
    int temp = small;
    small = big;
    big = temp;
  }
  cout << "GCD of entered numbers is: " << gcd(big, small) << endl;
  return 0;
}
