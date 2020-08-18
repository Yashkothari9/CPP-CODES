#include<bits/stdc++.h>
using namespace std;
int abs(int a,int b)
{
    if(a>b)
        return a-b;
    return b-a;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int coun=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1]||abs(a[i-1],a[i])==1)
            {
                coun=1;
                break;
            }
        }
        if(coun==1)
        {
            cout<<"2\n";
        }
        else
        {
            cout<<"1\n";
        }
    }
    return 0;
}
