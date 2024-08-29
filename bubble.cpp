#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
int main()
{
    vector<int> arr{10, 2, 3, 0, 11, 99};
    int n = arr.size();
    cout << "unsorted array is= \n"  ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" "<< "\n";
    }
    bubble(arr);
    cout << "sorted array is= \n";
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<"\n";
    }
}