#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int x,y,z;
        x=b;
        y=c;
        z=d;
        int flag=0;
        int i=1;
        while(true)
        {
            if((x+y>z)&&(y+z>x)&&(z+x)>y)
            {
               flag=1;
               break;
            }
            else if(x+y<=z)
            {
                z=(c+d)/(pow(2,i));
                if(z<c){z=c;}
                i++;
            }
            else if(y+z<=x)
            {
                x=(a+b)/(pow(2,i));
                if(x<a){x=a;}
                i++;
            }
            else if(x+z<=y)
            {
                y=(b+c)/(pow(2,i));
                if(y<b){y=b;}
                i++;
            }
        }
        cout<<x<<" "<<y<<" "<<z<<"\n";
    }
    return 0;
}
