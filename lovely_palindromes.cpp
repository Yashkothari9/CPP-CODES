#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    t=s;
    reverse(t.begin(),t.end());
    s=s+t;
    cout<<s<<"\n";
    return 0;
}
