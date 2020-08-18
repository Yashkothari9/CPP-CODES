#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))cnt1++;
        else
            cnt2++;
    }
    if(cnt1>cnt2)
    {
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
    }

    if(cnt1<=cnt2)
    {
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
        }
    }
    cout<<s<<"\n";
    return 0;
}
