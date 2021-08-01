#include<iostream>
using namespace std;
int search(int *arr, int key, int n)
{
    int s=0,e=n-1;
    int mid=0;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[s] <= arr[mid])
        {
            if(key>= arr[s] &&  key<=arr[mid])
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
            
        }
        else
        {
            if(key >= arr[mid] && key <= arr[e])
            {
                s=mid+1;
            }
            else
            {
                e = mid-1;
            }
            
        }
        
    }
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