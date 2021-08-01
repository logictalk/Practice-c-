#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
string exractstringcharacter(string str, int key)
{
    char *s = strtok((char*)str.c_str()," ");
    while(key > 1)
    {
        s = strtok(NULL," ");
        key--;
    }
    return (string)s;
}
// int convertintoint(string s)
// {
//     int ans=0;
//     int p=1;
//     for (int i = s.length()-1; i >= 0; i--)
//     {
//         ans += (s[i] - '0')*p;
//         p=p*10;
//     }
//     return ans;
// }
bool numericcomparator(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;
    key1 = s1.second;
    key2 = s2.second;
    return stoi(key1)<stoi(key2);
}
bool lexicocomparator(pair<string,string> s1, pair<string,string> s2)
{
    string key1,key2;
    key1=s1.second;
    key2=s2.second;
    return key1<key2;
}
int main()
{
    int n;
    cin>>n;
    cin.get();
    string a[1000];
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
    }
    int key;
    string reverse,ordering;
    cin>>key>>reverse>>ordering;
    pair<string,string> strpair[1000];
    for (int i = 0; i < n; i++)
    {
        strpair[i].first = a[i];
        strpair[i].second = exractstringcharacter(a[i],key);
    }
    if(ordering == "numeric")
    {
        sort(strpair,strpair+n,numericcomparator);
    }
    else
    {
        sort(strpair,strpair+n,lexicocomparator);
    }
    
    if(reverse == "true")
    {
        for (int i = 0; i < n/2; i++)
        {
            swap(strpair[i],strpair[n-i-1]);
        }
        
    }
    for(int i=0 ;i < n ;i++)
    {
        cout<<strpair[i].first<<" "<<endl;
    }
    return 0;
}