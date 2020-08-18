#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cost=0;
    if(n%2!=0)
    {
        cout<<"-1\n";
    }
    else
    {
        for(int i=0;i<n;i=i+2)
        {
            if(s[i]==')'&& s[i+1]=='(')
            {
                cost+=2;
            }
            else if(s[i]=='('&& s[i+1]=='(')
            {
                cost+=2;
            }
            else if(s[i]==')' && s[i+1]==')' )
            {
                cost+=2;
            }
            else
            {
                continue;
            }
        }
        cout<<cost<<"\n";
    }
    return 0;
}
