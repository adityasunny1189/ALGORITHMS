#include<bits/stdc++.h>
using namespace std;
int main() {
  long long int arr[600851475143];
  for(long long int i = 0; i < 600851475143; i++)
    arr[i] = i + 1;
  for(long long int i = 2; i < 600851475143; i++) {
    for(long long int j = i + 1; j < 600851475143; j++) {
      if(arr[j] % i == 0)
        arr[j] = 0;
    }
  }
  int largest_fact = 2;
  for(long long int i = 0; i < 600851475143; i++)
    if(arr[i] != 0)
      if(arr[i] > largest_fact)
        largest_fact = arr[i];
  cout << largest_fact << endl;
  return 0;
}
