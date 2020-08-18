#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
    string s;
    cin>>s;
    int counti=0;
    for(int i=0;i<s.size();i++)
    {
        cout<<a[s[i]-48]<<" ";
       counti+=a[s[i]-48-1];
    }cout<<"\n";
    cout<<counti<<"\n";
    return 0;
}
