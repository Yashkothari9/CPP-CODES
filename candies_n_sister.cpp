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
        int count=0;
        if(n>2)
        {
            if(n%2==0)
            {
                count=(n/2)-1;
            }
            else
            {
                count=(n/2);
            }
        }
        else
        {
            count=0;
        }
        cout<<count<<"\n";
    }
    return 0;
}
