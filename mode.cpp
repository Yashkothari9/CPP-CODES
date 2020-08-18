#include<bits/stdc++.h>
 using namespace std;
int find(int a[],int n)
{
    int l,r,mid;
    l=0;
    r=n-1;

    while(l<=r)
    {
         mid=r+(l-r)/2;
        if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
        {
            return a[mid];
        }
        else if(a[mid]>a[l])
        {
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }

}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x=find(a,n);
        printf("%d\n",x);
    }
   return 0;
}
