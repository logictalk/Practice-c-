#include<iostream>
using namespace std;
int binarySearch(int *arr,int x , int n)
{
    int l = 0;
    int r = n-1;
    int mid = 0;
    while (l <= r) {
        int m = l + (r - l) / 2;
  
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
  
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
  
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
  
    // if we reach here, then element was
    // not present
    return -1;
}

int main()
{
    int arr[100000];
    int n,key;
    cin>>n;
    for(int i=0 ;i <n; i++)
    {
        cin>>arr[i];
    }
    cin>>key;
    cout<<search(arr,key,n);
    return 0;
}
