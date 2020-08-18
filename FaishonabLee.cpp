#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        string ans="NO";
        if(n%4==0)
        {
            ans="YES";
        }
        cout<<ans<<"\n";
    }
    return 0;
}
