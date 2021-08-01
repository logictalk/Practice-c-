#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n/2+1; i++)
    {
        for (int j = 1; j <= 1; j++)
        {
            cout<<"*";
        }
        for (int k = 1; k <= n/2; k++)
        {
            if (k == n/2 && i!= n/2+1)
            {
                cout<<"*";
            }
            if (i==n/2+1)
            {
                cout<<"*";
            }
            else if(k < n/2)
            {
                cout<<" ";
            }
            
        }
          for (int p = 1; p <= n/2; p++)
            {
                if (i==n/2+1)
                {
                    cout<<"*";
                }
                
            }
        for (int l = 1; l <=n/2; l++)
        {
            if(i==1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
            
        }
        
        cout<<endl;
    }
    for (int i = 1; i <= n/2; i++)
    {
        for (int j = 1; j <= n/2+1; j++)
        {
            if (j== n/2+1 && i != n/2)
            {
                cout<<"*";
            }
            if (i==n/2)
            {
                cout<<"*";
            }
            else if(j < n/2+1)
            {
                cout<<" ";
            }
        }
        for (int k = 1; k < n/2; k++)
        {
            if (i == 0)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        for (int l = 1; l <= 1; l++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    
}