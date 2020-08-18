#include<bits/stdc++.h>
using namespace std;
typedef struct knapsack{
int w;
float p;
string ch;
double eq;
}knapsack;
bool comp(knapsack a,knapsack b)
{
    return a.eq > b.eq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int we;
        cin>>we;
        int n;
        cin>>n;
        knapsack a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i].ch>>a[i].w>>a[i].p;
        }

    for(int i=0;i<n;i++)
    {
     a[i].eq=((a[i].p)/(a[i].w));
     }
     sort(a,a+n,comp);
    int weight=0;
    float res=0;

    for(int l=0;l<n;l++)
    {
        if(weight+a[l].w<=we)
        {
            weight+=a[l].w;
            res+=a[l].p;
        }
        else
        {
            int remain = we-weight;
            weight+=remain;
            res += a[l].p * ((float) remain / (float)a[l].w);
            break;
        }
    }
    int x=(int)res;
    if((res-x)>0)
    {
     cout<<weight<<" "<<std::fixed<<setprecision(2)<<res<<"\n";
    }
    else
    {
        cout<<weight<<" "<<x<<"\n";
    }
}
    return 0;
}

