#include<bits/stdc++.h>
using namespace std;
int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    else
        return x * power(x, y / 2) * power(x, y / 2);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int v=n/3;
        cout<<"v+1:"<<v+1<<"\n";
        int *x=new int[v+1];
        for(int i=0;i<n;i++)
        {
            x[i]=power(3,i);
        }
        int su[n];
        su[0]=x[0];
        for(int i=1;i<n;i++)
        {
            su[i]=su[i-1]+x[i];
        }
        int maxi=0;
        for(int i=0;i<v+1;i++)
        {
            if(n==su[i])
            {
                maxi=1;
                cout<<su[i]<<"\n";
                break;
            }
        }
        if(maxi==0)
        {
        cout<<x[v]<<"\n";
        }
    }
    return 0;
}
