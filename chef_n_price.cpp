#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> prices;
        int in;
        for(int i=0;i<n;i++)
        {
            cin>>in;
            prices.push_back(in);
        }
        int sum=0;
        int loss=0;
        for(int i=0;i<n;i++)
        {
            sum+=(k<prices[i])?k:prices[i];
            loss+=(k<prices[i])?prices[i]-k:0;
        }
        cout<<loss<<"\n";
    }
    return 0;
}
