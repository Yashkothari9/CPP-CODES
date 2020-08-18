#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
        cin>>n;
       // cout<<"hio\n";
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int count=0;
        int sum=0;
        if(a[0]!=0)
        {
            count++;
            sum+=a[0];
        }
       int i=1;
       while(i<n)
        {
           /* if(a[i]!=0)
            {
                count++;
                int sum=a[i];
            for(int j=i+1;j<n;j++)
            {
                sum+=a[j];
                if(sum!=0)
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            }*/
            if(a[i]!=0 && sum+a[i]!=0)
            {
                cout<<"hi1\n";
                sum+=a[i];
                count=count+2;
                i++;
            }
            else
            {
                if(a[i]!=0)
                {
                   i=i-1;
                }
                else
                {cout<<"hi3\n";
                    sum=0;
                    continue;
                    i++;
                }
            }
        }

        cout<<count<<"\n";
    return 0;
}
