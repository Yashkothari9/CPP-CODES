#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int rt=1;rt<=t;rt++)
    {
        int n;
        cin>>n;
        vector<char> c(n,'A');
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
        }
        int cnta=0,cntb=0;
        for(int i=0;i<n;i++)
        {
            if(c[i]=='A')
            {
                cnta++;
            }
            if(c[i]=='B')
            {
                cntb++;
            }
        }
        int mini=min(cnta,cntb);
        int maxi=max(cnta,cntb);
        char ans;
        if(mini>=maxi/2)
        {
            if(maxi%2==0)
            {
                ans='Y';
            }
            else
            {
                if(mini>=(maxi+1)/2)
                {
                    ans='Y';
                }
                else
                {
                    ans='N';
                }
            }
        }
        else
        {
            ans='N';
        }
        cout<<"Case #"<<rt<<": ";
        cout<<ans<<"\n";
    }
    return 0;
}
