#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char box[n][m];
        int count =n*m;
        if(count%2!=0)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    if(count%2!=0)
                    {
                        box[i][j]='B';
                    }
                    else
                    {
                        box[i][j]='W';
                    }
                    count--;
                }
            }
        }
        else
        {
            count=count-1;
            box[0][0]='B';
            for(int i=0;i<n;i++)
            {
                for(int k=0;k<m;k++)
                {
                    if(i==0 && k==0)
                    {
                        continue;
                    }
                    else if(count%2!=0 )
                    {
                        box[i][k]='B';
                        count=count-1;
                    }
                    else if(count%2==0 )
                    {
                        box[i][k]='W';
                        count=count-1;
                    }
                }

            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<box[i][j];
            }cout<<"\n";
        }
    }
    return 0;
}
