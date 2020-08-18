#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s[n+1];
        for(int i=0;i<=n;i++)
        {
            s[i]=0;
        }
        int w=n,i=0;
        vector<int> a[n];
        a[i].push_back(1);
        s[1]=1;w--;
        while(w>0)
        {
            /*for(int i=0;i<n;i++)
            {
                cout<<s[i]<<" ";
            }cout<<"\n";*/
            for(int k=2;k<=n;k++)
            { int flg=0;
            //cout<<"hi1\n";
                if(s[k]==0)
                {
                if(a[i].size()==0)
                {
                    a[i].push_back(k);
                    w--;
                    s[k]=1;
                }
                else
                {
                for(int j=0;j<a[i].size();j++)
                {//cout<<"hi2\n";
                    if(gcd(k,a[i][j])==1 && s[k]==0)
                    {//cout<<"hi3\n";
                        continue;
                    }
                    else
                    {//cout<<"hi4\n";
                        flg=1;
                        break;
                    }
                }
                if(flg==0)
                {//cout<<"hi5\n";
                    a[i].push_back(k);
                    s[k]=1;

                    w--;
                }
                }
                }
            }
            if(a[i].size()==1)
            {
                for(int j=i-1;j>=0;j--)
                {int flag=0;
                    if(a[j].size()>2)
                    {
                    for(int k=0;k<a[j].size();k++)
                    {
                        if(gcd(a[j][k],a[i][0])==1)
                        {
                            a[i].push_back(a[j][k]);
                            vector<int>::iterator it;
                            it = a[j].begin();
                            a[j].erase(it+k);
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                    }
                }
                sort(a[i].begin(),a[i].end());
            }

             //cout<<"w="<<w<<"\n";
            i++;
        }
        for(int i=0;i<n;i++)
        {
            if(a[i].size()>0)

            {
                cout<<a[i].size()<<" ";
                for(int j=0;j<a[i].size();j++)
                {
                    cout<<a[i][j]<<" ";
                }cout<<"\n";
            }
        }
    }
    return 0;
}
