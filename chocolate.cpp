#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int> s;
    for(long long int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            s.push_back(i);
        }
    }
    long long int ans=1;
    if(s.size()==0)
        {
            ans=0;
        }
    else if(s.size()==1)
    {
        ans=1;
    }
    else
    {
        for(long long int i=1;i<s.size();i++)
        {
            ans=ans*(s[i]-s[i-1]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}
