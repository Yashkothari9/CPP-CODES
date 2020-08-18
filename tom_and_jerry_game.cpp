#include<bits/stdc++.h>
using namespace std;
long long int pow_of(long long int TS)
{
    long long int count=0;
    for(int i=0;i<TS;i++)
    {
        if(pow(2,i)<=TS)
        {
            count++;
        }
        else if(pow(2,i)>TS)
        {
            break;
        }
    }
    return count;
}
long long int count_divisibility_by_2(long long int tip)
{
    long long int count=0;
    while(tip%2==0)
    {
        count++;
        tip=tip/2;
    }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int ans=0;
        long long int TS;
        cin>>TS;
        if(TS<=2)
        {
            ans=0;
        }
        else if(TS%2!=0)
        {
            ans=((TS-1)/2);
        }
        else if(TS%2==0)
        {

                long long int c=count_divisibility_by_2(TS);
                long long int m=pow(2,c);
                 m*=2;
                if(TS==m)
                {
                    cout<<"YO\n";
                    ans=0;
                }
                else if(TS>m){
                cout<<TS<<"/"<<m<<"\n";
                ans=(TS/m);
                }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
