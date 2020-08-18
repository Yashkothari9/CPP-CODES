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

    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];

    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
    int curr_sum = res;
    int old=res;
    int in=0;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       if(res>curr_sum)
       {
           res=curr_sum;
       }
       if(res!=old)
       {
           old=res;
           in=i;
       }
    }

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
    int mi=minSum(a,n,k);
    cout<<mi<<"\n";
    return 0;
}
