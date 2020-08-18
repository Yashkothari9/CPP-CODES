#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr[i]=x;
        }
        int a=0,b=0,c=0,d=0;
        for(int j=0;j<n;++j)
        {

        if(arr[j]<arr[j+1])
        {
            b=j;
        }
        if(arr[j]<arr[j-1])
        {
            if((b-a)>=(d-c))
            {
                d=b-1;
                c=a;
            }
            a=j;
            b=j;
        }

        }
        if((b-a)>=(d-c))
        {
            d=b;
            c=a;
        }
        for(int k=c;k<=d;k++)
        {
            cout<<arr[k]<<" ";
        }
        cout<<"\n";
        cout<<(d-c+1)<<"\n";
    }
    return 0;
}
