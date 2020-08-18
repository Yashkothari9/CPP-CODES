#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int>s;
    s.insert(100);
    s.insert(20);
    s.insert(10);
    s.insert(5);
    s.insert(1);

    int t;
    cin>>t;
    while(t--)
    {
        int x,counti=0;
        cin>>x;
       // int a[5]={100,20,10,5,1};

        //int i=0;
        while(x>0)
        {
            set<int>::iterator itr=s.upper_bound(x);
            --itr;
            counti+=(x)/(*itr);
            x=x%(*itr);
        }

        cout<<counti<<"\n";
    }
    return 0;
}
