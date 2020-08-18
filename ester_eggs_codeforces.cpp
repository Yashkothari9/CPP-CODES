#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char b[n];
    char a[]={V,I,B,G,Y,O,R};
    for(int i=0;i<n;i++)
    {
        b[i]=a[i%7];
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
    }cout<<"\n";
}
