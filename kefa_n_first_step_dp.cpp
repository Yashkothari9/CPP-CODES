#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int *arr=new long long int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxi=0;
    int i=1;
    while(i<n)
    {
        if(arr[i]>=arr[i-1])
        {int counti=1,j=i+1;
            for(;j<n;j++)
            {
                if(arr[j]>=arr[j-1])
                {
                    counti++;
                }
                else{break;}
            }
           if(counti>maxi)
            {maxi=counti;}
           i=j;
        }
        else
        {
            i++;
        }
    }
    cout<<maxi+1<<"\n";
        return 0;
}
