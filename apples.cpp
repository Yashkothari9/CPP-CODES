#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
         long long int n,k,x,y,m;
        long long int c=0;
        cin>>n>>k;
        m=n;
        x=n/k;
        while(m>=0)
        {
            m=m-k;
            c++;
        }
        if(k==c)
        {cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
    }
	// your code goes here
	return 0;
}
