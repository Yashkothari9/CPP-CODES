#include<bits/stdc++.h>
using namespace std ;
int mod(int a,int b)
{
    if(a>=b)
    {
        return a-b;
    }
    else
    {
        return b-a;
    }
}
int main()
{
    int n,sum=0;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    long long int x,flg=0;
    sort(a,a+n);
    vector<long long int> arr;
    arr.push_back(a[0]);
    int count_num=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            arr.push_back(a[i]);
        }
    }
    if(arr.size()>3)
    {
        cout<<"NO\n";
    }
    else
    {
        if(arr.size()==3)
        {
            sort(arr.begin(),arr.end());
            if(2*arr[1]==arr[0]+arr[2])
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else if(arr.size()==1)
        {
            cout<<"YES\n";
        }
        else if(arr.size()==2)
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
