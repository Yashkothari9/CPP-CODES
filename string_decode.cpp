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
        string s;
        cin>>s;
        char y;
        int j=1;
        int i=0;
        int k=0;
        char *a=new char[n];
        int p= n/2 - (1 - (n % 2));
        while(i<=n && j<=n &&n%2!=0 )//&& n%2!=0)
        {
            a[p+k]=s[i];
            //cout<<a[n/2-k];
            i+=2;
            k++;
            a[p-k]=s[j];
            //cout<<a[n/2+k];
            j+=2;
        }
        while(i<=n && j<=n &&n%2==0 )//&& n%2!=0)
        {
            a[p-k]=s[i];
            //cout<<a[n/2-k];
            i+=2;
            k++;
            a[p+k]=s[j];
            //cout<<a[n/2+k];
            j+=2;
        }
       // while(i<=n && j<=n)
        for(int i=0;i<n;i++)
            cout<<a[i];
        cout<<"\n";
    }
    return 0;
}
