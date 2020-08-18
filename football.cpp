
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while(t--)
    {
        int n,x,y,m;
        vector <int> a;
        vector <int> b;
        vector <int> c;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for(int j=0;j<n;j++)
        {
            cin>>y;
            b.push_back(y);
        }
        for(int l=0;l<n;l++)
        {
            m=(a[l]*20)-(b[l]*10);
            if(m<0)
            {m=0;
            c.push_back(m);
            }
            cout<<"\n";
            else
            {
                c.push_back(m);
            }
        }
        sort(c.begin(),c.end());
        cout<<c[n]<<"\n";

    }

	// your code goes here
	return 0;
}
