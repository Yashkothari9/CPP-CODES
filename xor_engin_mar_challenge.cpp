#include<bits/stdc++.h>
using namespace std;
unsigned int countSetBits(int n)
    {
        unsigned int count = 0;
        while (n) {
            n &= (n - 1);
            count++;
        }
        return count;
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {

        int n,q;
        cin>>n>>q;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int p;
        long long int b[n];
        int c[100000];
        for(long int i=0;i<100000;i++)
        {
            c[i]=countSetBits(i);
            //c[i]=__builtin_popcount(i);
        }
        while(q--)
        {
            cin>>p;
            long long int counto=0,counte=0;
            for(int i=0;i<n;i++)
            {
                b[i]=a[i]^p;
                int f=c[b[i]];
                if(f%2==0)
                {
                    counte++;
                }
                else
                 {
                    counto++;
                 }
            }
            cout<<counte<<" "<<counto<<"\n";
        }

    }
    return 0;
}
