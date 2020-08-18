#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int num_of_cards=(n/k);
        int ans;
        if(m==0)
        {
            ans=0;
        }
        else if(num_of_cards>=m)
        {
            ans=m;
        }
        else if(num_of_cards<m)
        {
         // cout<<"left "<<m-num_of_cards<<"n-1"<<(k-1)<<"\n";
          if(n==m)
          {
              ans=0;
          }
          else{
            if((m-num_of_cards)>(k-1))
            {
                //cout<<num_of_cards<<"-"<<(1+(m-num_of_cards)%(k-1))<<" ";
                ans=num_of_cards-(1+(m-num_of_cards)%(k-1));
               // cout<<ans<<"\n";

            }
            else
            {
                ans=num_of_cards-1;
            }
          }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
