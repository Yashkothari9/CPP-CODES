#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int i;
    if(n>2)
    {
    i=n*(n-1)*(n-2);
    }
    else if(n==2)
    {
        i=2;
    }
    else
    {
        i=1;
    }
    cout<<i<<"\n";
    return 0;
}
