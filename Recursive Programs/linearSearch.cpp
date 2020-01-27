#include<bits/stdc++.h>
using namespace std;
void linearSearch(vector<int> v, int size, int ele) {
  static int found = 0;
  if(v[size - 1] == ele) {
    found = 1;
    cout << "Element found at: " << size - 1 << endl;
  }
  else
    linearSearch(v, --size, ele);
  if(found == 0)
    cout << "Element not present" << endl;
}
int main() {
  vector<int> v;
  int size;
  cout << "Enter size: ";
  cin >> size;
  for(int i = 0; i < size; i++){
    v.push_back(rand() % 100);
  }
  cout << "Array content are: ";
  for(int i = 0; i < size; i++)
    cout << v[i] << " ";
  cout << endl;
  int ele;
  cout << "Enter element to search: ";
  cin >> ele;
  linearSearch(v, size, ele);
  return 0;
}
