#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        int n=s.size();
        int arr[n];
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
        if(n>1)
        {
        for(int i=1;i<n;i++)
        {
            if(s[i]!=s[i-1])
            {
                if(arr[i-1]!=1)
                {
                    count++;
                    arr[i]=1;
                    arr[i-1]=1;
                }
            }
        }
        }
        cout<<count<<"\n";
    }
    return 0;
}
