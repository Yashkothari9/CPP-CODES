#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=0;
    }
    int sum=0;
    vector<char> w;
    for(int i=0;i<s.size();i++)
    {
        if(isalpha(s[i]))
        {
          w.push_back(s[i]);
        }
        if(isdigit(s[i]))
        {
          sum+=(s[i]-48);
        }
    }
    sort(w.begin(),w.end());
    string ans,num;
    num=to_string(sum);
    for(int i=0;i<w.size();i++)
    {
        ans+=w[i];
    }
    ans+=num;
    cout<<ans<<"\n";
    return 0;
}
