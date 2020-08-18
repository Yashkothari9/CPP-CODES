#include<bits/stdc++.h>
using namespace std;
int tribonaci(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(n==2)
    {
        return 1;
    }
    if(n>2)
    {
        return (tribonaci(n-1)+tribonaci(n-2)+tribonaci(n-3));
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x= tribonaci(n);
        cout<<x<<"\n";

    }

    return 0;
}
