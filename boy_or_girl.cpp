#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26]={0};
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-97]++;
    }
    int counti=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
        {
            counti++;
        }
    }
    if(counti%2!=0)
    {
        cout<<"IGNORE HIM!";
    }
    else
    {
        cout<<"CHAT WITH HER!";
    }
    return 0;
}
