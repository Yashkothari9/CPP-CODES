#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        cin>>n;
        int *a=new int[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int counti=0;
        for(int i=0;i<n;i++)
        {
           for(int j=i+1;j<n;j++)
           {
               if((a[i]+a[j])==(a[i]*a[j]))
               {
                   cout<<a[i]<<","<<a[j]<<"\t"<<a[i]+a[j]<<"="<<a[i]*a[j]<<"\n";
                   counti++;
               }
           }
        }
        cout<<counti<<"\n";
    }
return 0;
}
