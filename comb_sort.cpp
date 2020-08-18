
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,m,n;
        cin>>k;
        vector <int> v;
        for(int i=0;i<k;++i)
        {  cin>>n;
            while(n--)
            {
            cin>>m;
            v.push_back(m);

            }
        }

        sort(v.begin(),v.end());
       /* for(auto j=v.begin();j !=v.end();++j)
        {
            cout<<*j<<" ";
        }
        cout<<"\n";
*/
for (auto x : v)
        cout << x << " ";
        v.clear();
        cout<<"\n";
    }
    return 0;
}
