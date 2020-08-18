#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int counto=0,counti=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>0)
            {
                counti+=ar[i];
            }
            if(ar[i]<0)
            {
                if(counti>0)
                {
                    counti--;
                }
                else
                {
                    counto++;
                }
            }
        }
        cout<<counto;
        return 0;
}
