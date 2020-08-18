#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    int i;
    for(i=0;i<test_case;i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
        }

        int* length=(int*) calloc(n,sizeof(int));
        for(int j=0;j<n;j++)
        {
            length[j]=1;
        }
        int prev[n];
        for(int j=0;j<n;j++)
        {
            prev[j]=j;
        }
        for(int j=1;j<n;j++)
        {
            for(int k=0;k<=j-1;k++)
            {
                if(length[k]+1>=length[j] && a[j]>=a[k])
                {
                     length[j]=length[k]+1;
                     prev[j]=k;
                }
            }
        }

        int max_length=1;
        int k=0;
        for(int j=0;j<n;j++)
        {
            if(length[j]>max_length)
            {
                max_length=length[j];
                k=j;

            }
        }

        vector <int> c;
        c.push_back(k);
        int j=k;
        while(prev[j]!=j)
        {
            c.push_back(prev[j]);
            j=prev[j];
        }
        reverse(c.begin(),c.end());

        cout<<max_length<<"\n";
        for(j=0;j<c.size();j++)
        {
            cout<<c[j]+1<<" ";
        }
        cout<<"\n";


    }
    return 0;
}
