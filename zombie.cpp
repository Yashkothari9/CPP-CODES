#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,m,b,count=0;
        cin>>n;
        int c_p[n],h[n];
        int c_l[n];
        for(int z=0;z<n;z++)
        {
            c_l[z]=0;
        }
        m=n;
        for(b=0;b<n;b++)
        {
            cin>>c_p[b];
        }
        for( i=0;i<n;i++)
        {
            for(k=(i-c_p[i]);k<=(i+c_p[i]);k++)
            {
                c_l[k]=c_l[k]+1;
            }
        }
        for(j=0;j<n;j++)
        {
            cin>>h[j];
        }
        /*for(int g=0;g<n;g++)
        {

            cout<<h[g]<<"\t";
        }
        cout<<"\n";

        for(int y=0;y<n;y++)
        {

            cout<<c_l[y]<<"\t";
        }
        cout<<"\n";*/

        sort(c_l,c_l+n);
        sort(h,h+n);
       /* for(int y=0;y<n;y++)
        {

            cout<<c_l[y]<<"\t";
        }
        cout<<"\n";
        for(int y=0;y<n;y++)
        {
            cout<<h[y]<<"\t";
        }
    */
        for(int o=0;o<n;o++)
        {
            if(c_l[o]==h[o])
            {
                count++;
            }
            else {
                break;
            }
        }
        if(count==n)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}
