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
         int g=a[0];
            for(int h=1;h<n;h++)
            {
                if(g<a[h])
                {
                    int temp=g;
                    g=a[h];
                    a[h]=temp;
                }
            }

        int *b=new int[g+1];
        for(int j=0;j<=g;j++)
        {
            b[j]=0;
        }
        for(int k=0;k<n;k++)
        {
            b[a[k]]++;
        }
            int maxi=0;
            int mac=b[0];
            for(int y=1;y<=g;y++)
            {
                if(mac<b[y])
                {
                    int temp=maxi;
                    maxi=y;
                    y=temp;
                    mac=b[y];
                }
            }
            cout<<maxi<<"\n";

    }
}
