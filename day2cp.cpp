#include<iostream>
using namespace std;
int trailingzeroes(int n)
{
    int ans=0;
    int pow=5;
    while((n/pow) > 0)
    {
        ans += (n/pow);
        pow *= 5;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<trailingzeroes(n);
    return 0;
}