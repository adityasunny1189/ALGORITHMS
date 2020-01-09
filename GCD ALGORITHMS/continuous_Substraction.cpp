#include<bits/stdc++.h>
using namespace std;

//Continuous substraction method
int gcd(int big, int small) {
  int temp = small;
  while(1) {
    if(big % temp == 0)
      if(small % temp == 0)
        return temp;
    temp--;
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
