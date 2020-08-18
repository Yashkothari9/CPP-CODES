 #include<bits/stdc++.h>
using namespace std;
int gcd(int n1,int n2)
{
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    //printf("GCD = %d",n1)
    return n1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][2];

        for(int i=0;i<n;i++)
        {
            cin>>a[i][0];
        }
        for(int i=0;i<n;i++)
        {
            a[i][1]=0;
        }
        int col=1,i=0;
       for(int i=0;i<n;i++)
       {
           if(a[i][1]==0)
           {a[i][1]=col;
               for(int j=i+1;j<n;j++)
               {
                   //cout<<"gcd of "<<a[i][0]<<" and "<<a[j][0]<<" ="<<gcd(a[i][0],a[j][0])<<"\n";
                   if(gcd(a[i][0],a[j][0])!=1)
                   {
                       cout<<"gcd-"<<gcd(a[i][0],a[j][0])<<"pairs ("<<a[i][0]<<","<<a[j][0]<<")";
                       //cout<<"here\n";
                       a[j][1]=col;
                   }
               }cout<<"\n";
            //   cout<<i<<"\n";
            //   for(int k=0;k<n;k++)
            //   {
            //       cout<<a[k][1]<<" ";
            //   }cout<<"\n";
               col++;
           }
       }
       cout<<col-1<<"\n";
       for(int i=0;i<n;i++)
       {
           cout<<a[i][1]<<" ";
       }cout<<"\n";
    }
    return 0;
}

