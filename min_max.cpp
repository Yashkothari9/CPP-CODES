#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,m=0;
        cin>>n>>k;
        int a[n];
       // sort(a,a+n);
        for(int i=0;i<n;i++)
        {
           cin>>a[i];
           if(a[i]>a[m]){
             m=i;
           }
        }
       int y=*max_element(a, a + n);
        int x=*min_element(a, a + n);
        //sort(a,a+n);
        //cout<<a[m]<<endl;
        if(k>=3)
            cout<<y<<endl;
        else if(k==2)
            cout<<max(a[0],a[n-1])<<endl;
        else{
            cout<<x<<endl;
        }

    }
    return 0;
}
