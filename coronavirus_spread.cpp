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
        int x[n];
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        int flag=0;
        int max=INT_MIN,min=INT_MAX;
        int countmin=0,countmax=0;
        int count=1;
        for(int i=0;i<n;i++)
        {
            if((x[i+1]-x[i])<=2)
            {
                flag=1;
                count++;
            }
            else
            {
                if(count>1)
                {
                    if(count>max)
                    {
                        countmin=i;
                        max=count;
                    }
                    if(count<min)
                    {
                        countmax=i;
                        min=count;
                    }
                    count=0;
                }
                else
                {
                    count=1;
                }
            }
        }
        if(count>1)
                {
                    if(count>max)
                    {
                        countmin=n-1;
                        max=count;
                    }
                    if(count<min)
                    {
                        countmax=n-1;
                        min=count;
                    }
                }
        if(flag==1)
        {
        cout<<"index of minimum-"<<min<<"is at "<<countmin<<" "<<"index of maximum-"<<max<<"is at "<<countmax<<"\n";
        }
        else
        {
            cout<<"1"<<" "<<"1"<<"\n";
        }
    }
    return 0;
}
