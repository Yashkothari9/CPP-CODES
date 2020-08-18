#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,k;
        scanf("%d%d%d",&n&m&k);
        int j=m/n;
        if(j>k){cout<<"No\n";}
        int y;
        else if(j<k)
        {
            for(int i=0;i<j;i++)
            {
                y=y-j;
            }
            if(y>=0){cout<<"No\n";}
            else
            {
                cout<<"Yes\n";
            }
        }
    }
    return 0;
}
