#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    int temp;
    temp=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<"\n";
    return 0;
}
