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
        int x;
        vector <int> a;
        for(int i=0;i<n;i++)
         {
             cin>>x;
             a.push_back(x);
         }
         int sum=0;
         int min1=0;
         int max1=0;
         int dif;
        sort(a.begin(),a.end());
        for(int i=0;i<n-1;i++)
        {
          for(int j=i+1;j<n;j++)
            {
               dif=a[j]-a[i];
               sum+=(dif)*(pow(2,(j-i-1)));
            }

        }
        cout<<sum<<"\n";
    }
}
