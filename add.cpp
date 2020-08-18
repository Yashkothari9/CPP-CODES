#include<bits/stdc++.h>
using namespace std;
int add(int a,int b)
{
    while(b!=0)
    {
    int carry=a&b;

    a=a^b;

    b=carry<<1;
    }
    return a;
}
int main()
{
int t;
cin>>t;
while(t--)
{
    int a,b;
    cin>>a>>b;
    int c= add(a,b);
    cout<<c<<"\n";
}
return 0;
}
