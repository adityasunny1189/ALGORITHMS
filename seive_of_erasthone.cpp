#include<bits/stdc++.h>
using namespace std;
int main() {
  int arr[100];
  for(int i = 0; i < 100; i++)
    arr[i] = i + 1;
  for(int i = 2; i < 100; i++) {
    for(int j = i + 1; j < 100; j++) {
      if(arr[j] % i == 0)
        arr[j] = 0;
    }
  }
  for(int i = 0; i < 100; i++)
    if(arr[i] != 0)
      cout << arr[i] << endl;
  return 0;
}
