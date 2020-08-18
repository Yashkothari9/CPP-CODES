#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,l,x,y,m,j;
        cin>>n;
        x=-1;
        y=n;
        m=n;
        int a[n];
        p=j=-1;
        while(p!=2&&j!=2)
        {
             cin>>p>>j;
            if((p==0)&&(j==0))
            {
                cin>>l;
              if(y-x==1)
              {
                  cout<<"F\n";
              }
              else{
                    cout<<"O\n";
                    a[++x]=l;
              }

            }
             if((p==0)&&(j==1))
             {
                 if(x==-1)
                 {
                     cout<<"E\n";
                 }
                 else{
                    a[x--]=-1;
                 }

             }
             if((p==1)&&(j==0))
             {
                 cin>>l;
                 if(y-x==1)
              {
                  cout<<"F\n";
              }
              else{
                    a[--y]=l;
                cout<<"O\n";
              }

             }
             if((p==1)&&(j==1))
             {
                 if(y==n)
                 {
                     cout<<"E\n";
                 }
                 else{
                     a[y++]=-1;
                 }

             }
            // cout<<x<<" "<<y<<endl;


        }

    }
    return 0;

}

