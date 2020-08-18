#include<bits/stdc++.h>
using namespace std;
void minSwaps(vector<int> arr, int n)
{
    int st=0,ed=0,len=0,ma_len=0,flg,flag=0;
    int i=1;
    while(i<n)
   {
       if(arr[i]<=arr[i-1])
       {
           if(flg==1)
           {
               flag=1;
               break;
           }
           len++;
           if(len>ma_len)
           {
           ma_len=len;
           ed=i;
           }
           flg=0;
           i++;
          // cout<<"by\n";
       }
       else
       {
       if(ma_len>0)
        {//cout<<"he\n";
          int start=ed-ma_len;
         reverse(arr.begin()+start,arr.begin()+ed);
         for(int j=0;j<n;j++)
         {
             cout<<arr[j]<<" ";
         }cout<<"\n";
         flg=1;
         i--;
        }
        else
        {cout<<"he1\n";
            i++;
        }
       }
   }
   if(flag==0)
   {
    cout<<"yes\n";
   cout<<ed-ma_len+1<<" "<<ed+1<<"\n";
   }
   else
   {
       cout<<"no\n";
   }

}
int main()
{
    int n,x;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    int flg=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
           {
            continue;
           }
        else
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
    {
        cout<<"yes\n";
        cout<<"1"<<" "<<"1"<<"\n";
    }
    else
    {
        minSwaps(a,n);
    }
    return 0;
}
