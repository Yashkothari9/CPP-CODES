#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int v,e;
        cin>>v>>e;
        vector<int> a[v];
        for(int i=0;i<e;i++)
        {
            int g,f;
            cin>>g>>f;
            a[g].push_back(f);
            a[f].push_back(g);
        }
        for(int i=0;i<v;i++)
        {int n=a[i].size();
            cout<<i<<"->"<<a[i][0]<<"->";
            for(int j=1;j<n;j++)
            {
                if(j<a[i].size()-1)
                cout<<a[i][j]<<"->";
                else
                cout<<a[i][j];
            }cout<<"\n";
        }//cout<<"finshed\n";
    }
	//code
	return 0;
}
