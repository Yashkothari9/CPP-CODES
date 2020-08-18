#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=n,count=0;
        while(ans>=1)
        {int start=2;
            for(int i=1;i<n;i++)
            {

                if(ans<(start+(3*i)+2))
                {ans=ans-(start);
                 //cout<<"start- "<<start<<"ans-"<<ans<<"\n";
                 count++;
                    break;
                }
                start+=(3*i)+2;
            }
            if(ans==1)
            {
                break;
            }
        }
        cout<<count<<"\n";

    }
    return 0;
}
