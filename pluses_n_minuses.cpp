#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int res=0;
        for(int i=0;;i++)
        {
            int cur=i;
            bool ok=true;
            for(int j=0;j<s.size();j++)
            {
                res+=1;
                if(s[i]=='+')
                {
                    cur+=1;
                }
                else
                {
                    cur-=1;
                }
                if(cur<0)
                {
                    ok=false;
                    break;
                }
            }
            //cout<<i<<" "<<res<<" "<<cur<<"\n";
            if(ok)
            {
                break;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}
