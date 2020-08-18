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
        int arr[n][n];
        int count=1;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<n;j++)
                {
                    arr[i][j]=count++;
                }
            }
            else
            {
                for(int j=n-1;j>=0;j--)
                {
                    arr[i][j]=count++;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";
            }cout<<"\n";
        }
    }
    return 0;
}
