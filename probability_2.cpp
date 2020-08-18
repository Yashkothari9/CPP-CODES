#include<bits/stdc++.h>
using namespace std;
int find_common(int n,int m)
{
    for(int i=1;i<=m;++i)
    {
        if(((n%i)==0)&&((m%i)==0))
        {
            n=(n/i);
            m=(m/i);
        }
    }
    cout<<m<<"/"<<n<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2;
        cin>>a1>>a2;
        cin>>b1>>b2;
        int sum1=(a1+a2);
        int sum2=(b1+b2);
        int max1;
        if(sum1>sum2){max1=sum1;}
        else {max1=sum2;}
        int countp=0;
        for(int k=max1+1;k<13;k++)
        {
            for(int i=1;i<=6;i++)
            {
                for(int j=1;j<=6;j++)
                {
                    if((i+j)==k)
                    {
                        countp++;
                    }
                }
            }
        }
        if(countp==1){cout<<"1"<<"\n";}
        if(countp==0){cout<<"0"<<"\n";}
        else{
            find_common(36,countp);
        }

        //cout<<std::fixed<<setprecision(3)<<prob;
    }
    return 0;
}
