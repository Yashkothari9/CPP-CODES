#include<bits/stdc++.h>
using namespace std;
//int IsDivisible(long long int )
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string ans;
        if(n%2!=0)
        {
            if(n==1)
            {
            ans="FastestFinger";
            }
            else{
            ans="Ashishgup";
            }
        }
        else
        {
            if(n==2)
            {
                ans="Ashishgup";
            }
            else if(n!=4 && n!=6 && n!=8 &&((n%4==0&& ((n/4)%2)!=0)||((n%6==0 && ((n/6)%2)!=0))||(n%8==0 && ((n/8)%2)!=0)))
            {
                cout<<n%4<<" "<<n/4<<"\n";
                cout<<n%6<<" "<<n/6<<"\n";
                cout<<n%8<<" "<<n/8<<"\n";
                ans="Ashishgup";
            }
            else
            {
                ans="FastestFinger";
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
