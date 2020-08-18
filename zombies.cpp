#include<bits/stdc++.h>
using namespace std;
long long int initializeDiffArray(long long int *D,long long int *c_l,int n)
{
    //.int n = c_l.size();
    //long long int *D= new long long[n + 1];

    D[0] = c_l[0], D[n] = 0;
    for (int i = 1; i < n; i++)
        D[i] = c_l[i] - c_l[i - 1];

}
void update(long long int *D, int l, int r, int x)
{
    D[l] += x;
    D[r + 1] -= x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,m,b,count=0;
        long long int x,y,r,l;
        cin>>n;
       long long int c_p[n];
        long long int h[n];
        long long int c_l[n];
        m=n;
        for(b=0;b<n;b++)
        {
            cin>>c_p[i];
            c_l[i]=0;
        }
        long long int D[n];
        initializeDiffArray(D,c_l,n);
        for( i=0;i<n;i++)
        { r=i-c_p[i];
          l=i+c_p[i];
          if(r<0){r=0;}
          if(l>n){l=n-1;}
          update(D,r,l,1);

            /*for(auto j=D.begin();j!=D.end();j++)
            {
                cout<<*j<<"\t";
            }
            cout<<"\n";*/
        }
       for(j=0;j<n;j++)
        {
            cin>>h[j];
        }
      /*  for(int g=0;g<n;g++)
        {

            cout<<h[g]<<"\t";
        }
        cout<<"\n";

        for(int y=0;y<n;y++)
        {

            cout<<D[y]<<"\t";
        }
        cout<<"\n";
    */
    for (int i = 0; i < n; i++) {
        if (i == 0)
            c_l[i] = D[i];
        else
            c_l[i] = D[i] + c_l[i - 1];
    }
        sort(c_l,c_l+n);
        sort(h,h+n);
       for(int y=0;y<n;y++)
        {

            cout<<c_l[y]<<"\t";
        }
        cout<<"\n";
        for(int y=0;y<n;y++)
        {
            cout<<h[y]<<"\t";
        }

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
