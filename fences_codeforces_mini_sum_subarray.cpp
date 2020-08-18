#include<bits/stdc++.h>
using namespace std;
int minSum(int arr[], int n, int k)
{
    // k must be greater
    if (n < k)
    {
       cout << "Invalid";
       return -1;
    }
    int arri[n];
    for(int i=0;i<n;i++)
    {
        arri[i]=0;
    }
    arri[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        arri[i]=arri[i-1]+arr[i];
    }
    int sum=arri[k-1];
    int in=1;
    for(int i=1;i<n-k+1;i++)
    {
       // cout<<i+1<<" "<<arri[i+k-1]<<"-"<<arri[i-1]<<"="<<arri[i+k-1]-arri[i]+arr[i]<<"\n";
        if(sum>(arri[i+k-1]-arri[i-1]))
        {
            sum=arri[i+k-1]-arri[i-1];
           // cout<<i<<"\n";
            in=i+1;
           // cout<<in<<"\n";
        }
    }
   // cout<<sum<<" ";
    return in;
}
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<"1\n";
    }
    else{
    int mi=minSum(a,n,k);
    cout<<mi<<"\n";
    }
    return 0;
}
