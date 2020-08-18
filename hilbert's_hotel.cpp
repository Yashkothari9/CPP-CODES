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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long shifted;
        map<long long int,int> rooms;
        int flag=0;
        for(int i=0;i<n;i++)
        {int k;
            if(a[i]<0)
            {
               k=(a[i]%n);
               shifted=k+a[n-k];
               cout<<"negetive"<<shifted<<"\n";
               if(rooms.find(shifted)==rooms.end())
               {
                   rooms.insert({shifted,1});
               }
               else
               {
                   flag=1;
                   break;
               }
            }
            else
            {
                k=a[i]%n;
                shifted=k+a[k];
                cout<<"positive"<<shifted<<"\n";
                if(rooms.find(shifted)==rooms.end())
                {
                    rooms.insert({shifted,1});
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {

            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
    return 0;
}
