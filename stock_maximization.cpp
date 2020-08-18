#include<bits/stdc++.h>
using namespace std;
struct stock{
long long int a,b,dif,sel;
};
bool comp(stock ai,stock bi)
{
    return ai.a < bi.a;
}
bool comp1(stock ai,stock bi)
{
    return ai.b < bi.b;
}
int lis( stock arr[], int n )
{
    int lis[n];

    lis[0] = 1;

    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++ )
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i].b > arr[j].b && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }

    // Return maximum value in lis[]
    return *max_element(lis, lis+n);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        stock s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i].a>>s[i].b;
            s[i].dif=s[i].b-s[i].a;
           // s[i].sel=-1;
        }
        sort(s,s+n,comp);
        //cout<<lis(s,n)<<"\n";
    set<int> st;
	set<int>::iterator it;
	st.clear();
	for (int i = 0; i < n; ++i)
	{
		st.insert(s[i].b);
		it = st.find(s[i].b);
		++it;
		if (it != st.end())
			st.erase(s[i].b);
	}
	printf ("%d\n",st.size());

      //  for(int i=0;i<n)
    }
    return 0;
}
