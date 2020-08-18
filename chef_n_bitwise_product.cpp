#include<bits/stdc++.h>
using namespace std;
long long int Calc(long long int x,long long y,long long z)
{
    long long res;
    res=(x&z)*(y&z);
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,l,r;
        cin>>x>>y>>l>>r;
        vector<long> ans;
        for(long long int i=l;i<=r;i++)
        {
            ans.push_back(Calc(x,y,i));
        }
        for(long i=0;i<ans.size();i++)
        {
            cout<<"at "<<i+l<<" the value is ="<<ans[i]<<"\n";
        }
    }
    return 0;
}
