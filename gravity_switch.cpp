#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c;
    cin>>c;
    int *a=new int[c];
    for(int i=0;i<c;i++)
    {
        cin>>a[i];
    }
    sort(a,a+c);
    for(int i=0;i<c;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

