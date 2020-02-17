#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right)
{
    int n1,n2;
    n1 = mid - left + 1;
    n2 = right - mid;
    int Larr[n1], Rarr[n2];
    for(int i = 0; i < n1; i++)
        Larr[i] = arr[left + i];
    for(int j = 0; j < n2; j++)
        Rarr[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2)
    {
        if(Larr[i] <= Rarr[j])
        {
            arr[k] = Larr[i];
            i++;
        }
        else
        {
            arr[k] = Rarr[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = Larr[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = Rarr[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int left, int right)
{
    if(right > left)
    {
        int mid = (right + left) / 2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    sleep(1);
}
int main()
{
    clock_t start, end;
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
    cout << "Entered unshorted array is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    start = clock();
    mergesort(arr, 0, n - 1);
    end = clock();
    cout << "Entered shorted array is: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << start << " " << end << " " << CLOCKS_PER_SEC << endl;
    cout << (double)(- start + end) / CLOCKS_PER_SEC << endl;
}

