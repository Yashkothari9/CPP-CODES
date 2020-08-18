
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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int b[n];
        int max=0;
        int flag=0;
        int k=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;

            for(int j=i;j<n;j++)
            {
                sum+=a[j];
                if(sum%2==0)
                {
                    flag=1;
                    b[k++]=j;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==0)
        {
            cout<<"-1\n";
        }
        else
        {
            cout<<k<<"\n";
            for(int l=0;l<k;l++)
            {
                cout<<b[l];
            }
        }

    }

}
