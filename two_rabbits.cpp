#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        int s=(y-x)/(a+b);
        double s1=(double)(y-x)/(b+a);
        if(s1==s)
        {
            cout<<s<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }

    }
    return 0;
}
