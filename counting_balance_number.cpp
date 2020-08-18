#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int count_bal=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        for(int i=0;i<n;i++)
        {

            int b=a[i];
            int s[10]={0};
            while(b!=0)
            {

                s[b%10]++;
                b=b/10;
            }
            int flag=0;
            for(int j=0;j<=9;j++)
                {
                if(s[j]>0)
                {
                if((j%2==0))
                {
                    if(s[j]%2!=0)
                    {
                    flag=1;
                    }
                    else
                    {
                    flag=0;
                    break;
                    }
                }
                else
                    {
                    if(s[j]%2==0)
                     {
                        flag=1;
                     }
                    else
                     {
                        flag=0;
                        break;
                     }
                    }
                }
                }
                if(flag==1)
                {
                    count_bal++;
                }
                else
                {
                    continue;
                }
            }
            cout<<count_bal<<"\n";
        }
    return 0;
}
