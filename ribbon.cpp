#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int x,y,z;
    int p=n/a;
    int q=n/b;
    int counti=0;
    for(int i=0;i<=p;i++)
    {
        x=p;
        for(int j=0;j<=q;j++)
        {
            y=q;
            z=(n-(a*x+b*y))/c;
            if(z<0){z=0;}
            if(counti<x+y+z)
            {
                cout<<x<<" "<<y<<" "<<a*x<<" + "<<b*y<<" "<<z<<" ";
                counti=x+y+z;
            }
        }
    }
    cout<<counti<<"\n";
    return 0;
}
