#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int flag=0;
        while(a!=0 &&b!=0 &&a>0 && b>0)
        {
            if(a==2*b)
            {
               flag=1;break;
            }
            else if(b==2*a)
            {
                flag=1;break;
            }
            else if(a<b)
            {
                    //cout<<"b/2->"<<b/2<<"\n";
                    a=a-(b/2);
                    b=b-2*(b/2);

            }
            else if(b<a)
            {
                   // cout<<"a/2->"<<a/2<<"\n";
                    b=b-(a/2);
                    a=a-2*(a/2);

            }
            else
            {
                b=b-2;a=a-1;
            }
        }
       //cout<<a<<" "<<b<<"\n";
        if((a==0&&b==0)||flag==1)
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
