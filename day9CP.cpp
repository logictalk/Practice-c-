#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
long long arr[100005],presum[100005];
int main()
{
    int n;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
	memset(presum,0,sizeof(presum));
	presum[0]=1;
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
        sum = sum%n;
        sum = (sum+n)%n;  //for negative 
        presum[sum]++;
    }
    long long ans=0;
    for(int i=0; i < n; i++)
    {
        long long combination = presum[i];
        ans += (combination)*(combination-1)/2;
    }
    cout<<ans<<endl;
    }
    return 0;
}