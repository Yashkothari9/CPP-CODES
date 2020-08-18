#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,n,m;
        cin>>x>>n>>m;
        int no,mo,b,flag=0,n1,m1;
        b=x;
        n1=n;
        m1=m;
      /*  while(n!=0 || m!=0)
        {
             //cout<<"he\n";
             no=floor(x/2)+10;
             mo=x-10;

             if((no<=mo)&& n>0 || m==0)
             {cout<<" n used ";

                 x=no;
                 cout<<"x- "<<x<<"\n";
                 n--;
                 if(x<=0)
                 {
                     flag==1;
                     break;
                 }
                 else
                 {
                     continue;
                 }

             }
             else if((mo<no)&& m>0 || n==0)
             { cout<<"m used ";
                 x=mo;
                 m--;
                 cout<<"x- "<<x<<"\n";
                 if(x<=0)
                 {
                     flag=1;
                     break;
                 }
                 else
                 {
                     continue;
                 }

             }
             else
             {
                 break;
             }

        }*/
        //if(x>0 || flag==0)
        //{
         int mi,ni;
         x=b;
        // cout<<"new "<<x<<"\n";

            while(n1!=0 || m1!=0)
            {
                if((x-m1*10<=0)||n1==0)
                {
                   // cout<<"m used ";
                    x=x-m1*10;
                    //cout<<"x- "<<x<<"\n";
                    m1=0;
                    if(x<=0|| (n1==0&&m1==0))
                    {
                        break;
                    }
                }
                else
                {
                    //cout<<" n used ";

                    x=floor(x/2)+10;
                    //cout<<"x- "<<x<<"\n";
                    n1--;
                }
            }

       // }
        if(x<=0)
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
