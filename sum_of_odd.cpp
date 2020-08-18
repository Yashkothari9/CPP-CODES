#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n%2==0)
        {
            if(k%2==0 && k<=sqrt(n))
            {
                cout<<"YES\n";
            }
            else if(k>sqrt(n))
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            if(k%2==0 && k>sqrt(n))
            {
                cout<<"NO\n";
            }
            else if(k>sqrt(n))
            {
                cout<<"NO\n";
            }
            else
                {
                 cout<<"YES\n";
                }
        }

    }
    return 0;
}
