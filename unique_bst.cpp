#include<bits/stdc++.h>
using namespace std;
unsigned long int bin(int n,int k)
{
    unsigned long int ans=1;
    if(k>n-k)k=n-k;

    for(int i=0;i<k;i++)
    {
        ans*=(n-i);
        ans/=(i+1);
    }
    return ans;
}
unsigned long int calc(int n)//using catalan number
{
    unsigned long int m=bin(2*n,n);
    return (m/(n+1));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        unsigned long int x;
        cin>>n;
        x=calc(n);
        cout<<x<<"\n";
    }
    return 0;
}
