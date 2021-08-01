#include<iostream>
using namespace std;
//metho 1
int bitwise(int n)
{
    int count=0;
    for(int number=n; number != 0; number=number>>1)
    {
        if(number&1==1)
        {
            count++;
        }
    }
    return count;
}
//method 2
int bitwisefast(int n)
{
    int count=0;
    while(n > 0)
    {
        n= n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    cout<<bitwise(n)<<endl;
    // cout<<bitwisefast(n)<<endl;
    //method 3 inbulit fuction
    // cout<<__builtin_popcount(n)<<endl;
    }
    return 0;
}
