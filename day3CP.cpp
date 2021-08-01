#include<iostream>
#include<string.h>
using namespace std;
void magicalpark(char arr[][100], int n, int m, int k ,int s)
{
      bool win=true;
    for(int i=0; i <n ;i ++)
    {
        for(int j=0;j<m ;j++)
        {
            if(k >  s)
            {
                cout<<"No"<<endl;
                win=false;
                return;
            }
            if(arr[i][j] == '.')
            {
                s=s-2;
            }
            else if(arr[i][j] == '*')
            {
                s=s+5;
            }
            else if(arr[i][j] == '#')
            {
                break;
            }
            if(j != n-1)
            {
                s--;
            }
        }
    }
    if(win)
    {
        cout<<"Yes"<<endl;
        cout<<s<<endl;

    }
}
int main()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    char arr[100][100];
    cin.get();
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    magicalpark(arr,n,m,k,s);
    return 0;

}