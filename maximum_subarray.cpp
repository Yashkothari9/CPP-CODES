#include<bits/stdc++.h>
using namespace std;
void max_sub_array(int a[],int n)
{
    int len=0,len_max=0;
    int max_final=INT_MIN,max_till_here=0;
    for(int i=0;i<n;i++)
    {
        len++;
        max_till_here=max_till_here+a[i];
        if(max_final<=max_till_here)
        {
            len_max=len;
            max_final=max_till_here;
        }
        if(max_till_here<0)
        {
            len=0;
            max_till_here=0;
        }
    }
    cout<<len_max<<" "<<max_final;
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


         max_sub_array(a,n);
        cout<<"\n";
    }
 return 0;
}
