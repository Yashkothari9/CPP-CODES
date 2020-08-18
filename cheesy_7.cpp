#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m;
        cin>>n>>m;
        if(n > m)
        {
        if(n%m==0)
        {
         if(m==1)
        {
            if(n%2==0)
            {
                cout<<"B\n";
            }
            else
            {
                cout<<"A\n";
            }
        }
        else
        {
            cout<<"A\n";
        }

        }
        else
            {
                if(n%m==1 && (n/m)>1)
                {
                    cout<<"A\n";
                }
                else
                {
                    cout<<"B\n";
                }

        }
        }
        else cout << "A\n";
    }
    return 0;
}
