#include<bits/stdc++.h>
using namespace std;
vector<int> longest_subsequence(int a[],int n)
{
    int start=0,max=0,idx=0,eidx=0,start_idx=0,end_idx=0;
    for(int i=0;i<n;i++)
    {
        //cout<<"he1\n";
        if(a[i]==0)
        {//cout<<"he2\n";
            if(start>0)
            {
                start++;
                if(max<start)
                {//cout<<"he3\n";
                    max=start;
                    idx=start_idx;
                    eidx=i;
                }
            }
            else
            {//cout<<"he4\n";
                start_idx=i;
                start++;
                 if(max<start)
                {//cout<<"he3\n";
                    max=start;
                    idx=start_idx;
                    eidx=i;
                }
            }
        }
        else{
            start=0;
        }
    }
    //cout<<"he5\n";
    vector<int> ans;
    ans.push_back(idx);
    ans.push_back(eidx);
    return ans;
}
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
            a[i]=0;
        }
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
             //cout<<"he\n";
             ans=longest_subsequence(a,n);
            // cout<<"he6\n";
            //cout<<"for "<<i<<"th iteration the initial index="<<ans[0]<<"the final index is "<<ans[1]<<"\n";
             int idx=(ans[0]+ans[1])/2;
             //cout<<ans[0]<<" "<<ans[1]<<"\n";
             a[idx]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }cout<<"\n";
    }
    return 0;
}
