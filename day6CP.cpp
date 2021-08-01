#include<iostream>
using namespace std;
void primevisit(int *p)
{
    for (int i = 3; i < 1000000; i+=2)
    {
        p[i]= 1;
    }
    for (long long  i = 3; i < 1000000; i+=2)
    {
        if(p[i]==1)
        {
            for (long long j = i*i; j < 1000000; j+=i)
            {
                p[j]=0;
            }
            
        }
    }
    p[0]=0;
    p[1]=0;
    p[2]=1;
    
}
int main()
{
    int n1,n2;
	int t;
	cin>>t;
    int p[1000005] = {0};
    primevisit(p);
    int sumarr[1000005]={0};
    for (int i = 1; i <= 1000000; i++)
    {
        sumarr[i] = sumarr[i-1] + p[i];
    }
    
	while(t--)
	{
    cin>>n1>>n2;
    cout<<sumarr[n2]-sumarr[n1-1]<<endl;
	}
    return 0;
}