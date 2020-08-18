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
        long long int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        int size=1;
        int max=1;
        int prev;
        /*for(int start=0;start<n;start++)
        {prev=s[start];
         size=1;
            for(int i=start;i<n;i=(i*2))
            {
                if(prev<s[i-1])
                {
                    size++;
                    if(max<size)
                    {
                        max=size;
                    }
                    prev=s[i-1];
                }
                else{
                    break;
                }
            }
        }*/
        for(int start=1;start<n;start++)
        {int prev=s[start-1];
        //cout<<"start "<<start<<"\n";
       // cout<<"prev- "<<prev<<"\n";
         int x=2;
            for(int i=start*2-1;i<n;i=i*x++)
            {size=1;
             //cout<<"i :"<<i<<"\n";
                for(int j=i;j<n;j=j*2)
                {
                    //cout<<"j: "<<j<<" s[j]: "<<s[j]<<"\n";
                    if(prev<s[j-1])
                    {
                      size++;
                      if(max<size)
                      {
                          max=size;
                          //cout<<"start: "<<start<<"max: "<<max<<"the ele "<<s[j]<<"is greater than "<<prev<<"\n";
                      }
                      prev=s[j];
                    }
                else{
                    break;
                    }
                }
            }
        }
        //cout<<"---------the ans------------"<<max<<"\n";
        cout<<max<<"\n";
    }
    return 0;
}
