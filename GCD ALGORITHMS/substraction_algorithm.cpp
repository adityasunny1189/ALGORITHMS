#include<bits/stdc++.h>
using namespace std;

int gcd(int big, int small) {
  while(1) {
    int temp = big - small;
    if(temp == small)
      return temp;
    else {
      if(temp > small)
        big = temp;
      else
        small = temp;
    }
  }
}

int main() {
  long long int big, small;
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
