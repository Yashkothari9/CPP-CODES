#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int a,b,c;
    cin>>a>>b>>c;
    pair<int,int> ans;
    if(a>c)
    {
        ans=make_pair(-1,1);
    }
    else if(a==c)
    {
        ans=make_pair(-1,2);
    }
    else if(a<c)
    {
        if(a==(c/b))
        {
         ans=make_pair(1,-1);
        }
        else if(a>(c/b))
        {
            ans=make_pair(1,b);
        }
        else if(a<(c/b))
        {
            ans=make_pair(1,-1);
        }
    }
    cout<<ans.first<<" "<<ans.second<<"\n";
    }
    return 0;

}
