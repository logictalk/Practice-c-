#include<iostream>
#include<algorithm>
using namespace std;
//method 1
void rotate(int arr[][100],int n)
{
    for(int j=n-1;j>=0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // rotate(arr,n);
    //method 2
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i],arr[i]+n);
    }
    for(int i =0;i < n ;i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i < j)
            {
                swap(arr[i][j],arr[j][i]);
            }
        }
        
    }

       for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}