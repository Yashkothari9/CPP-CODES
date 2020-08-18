#include<bits/stdc++.h>
using namespace std;
struct customer{
int t;
int l;
int h;
};
bool comp(customer a,customer b)
{
    return a.t < b.t;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        customer a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i].t>>a[i].l>>a[i].h;
        }
        sort(a,a+n,comp);
        int flag=0;
        if(a[0].t-)
        for(int i=1;i<n;i++)
        {

        }
    }
    return 0;

}
