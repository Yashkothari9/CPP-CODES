#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        int sum=m;
        while(sum>0)
        {
        if((sum>0)&& ((sum/500)>0))
        {   int y=sum;
            int x=y/500;
            cout<<x<<"x500"<<endl;
            sum=sum-(x*500);
        }
        else if((sum>0)&& ((sum/100)>0))
        {   int y=sum;
            int x=y/100;
            cout<<x<<"x100"<<endl;
            sum=sum-(x*100);
        }
        else if((sum>0)&& ((sum/50)>0))
        {   int y=sum;
            int x=y/50;
            cout<<x<<"x50"<<endl;
            sum=sum-(x*50) ;
        }
        else if((sum>0)&& ((sum/20)>0))
        {   int y=sum;
            int x=y/20;
            cout<<x<<"x20"<<endl;
            sum=sum-(x*20) ;
        }
        else if((sum>0)&& ((sum/10)>0))
        {   int y=sum;
            int x=y/10;
            cout<<x<<"x10"<<endl;
            sum=sum-(x*10) ;
        }
        else if((sum>0)&& ((sum/5)>0))
        {   int y=sum;
            int x=y/5;
            cout<<x<<"x5"<<endl;
            sum=sum-(x*5) ;
        }
        else if((sum>0)&& ((sum/2)>0))
        {   int y=sum;
            int x=y/2;
            cout<<x<<"x2"<<endl;
            sum=sum-(x*2) ;
        }
        else if((sum>0)&& ((sum/1)>0))
        {   int y=sum;
            int x=y/1;
            cout<<x<<"x1"<<endl;
            sum=sum-(x*1) ;
        }
        else
        {continue;}
        }
    }
    return 0;

}
