#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        char s[n];
        string alpha="abcdefghijklmnopqrstuvwxyz";
        for(int i=0;i<n;i++)
        {
            s[i]=alpha[i%b];
        }
        for(int i=0;i<n;i++)
        {
            cout<<s[i];
        }cout<<"\n";
    }
    return 0;
}
