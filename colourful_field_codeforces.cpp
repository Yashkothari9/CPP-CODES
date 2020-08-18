#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,t;
    cin>>n>>m>>k>>t;

    int x,y;
    vector<pair<int,int>> waste;
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        waste.push_back(make_pair(x,y));
    }
    sort(waste,waste+k);
    int I=0,J=0;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y;
        int flg=0;
        int l=0;
        int co=0;
         while(waste[l].first<=x)
            {
                if(waste[l].first<=x &&waste[l++].second<y)
                {
                    co++;
                }
                if(waste[l].first==x && waste[l].second==y)
                {
                    flg==1;
                    break;
                }
            }
        if(x==0 && flg==0)
        {
            I=y;
            J=co;
        }
        else if(x>0 && flg==0)
        {
            I=m*(x-1)+y-1;
            J=co++;
        }
        if(flg==1)
        {
            cout<<"Waste\n";
        }
        else if((I-J)%3==0)
        {
            cout<<"Carrots\n";
        }
        else if((I-J)%3==1)
        {
            cout<<"Kiwis\n";
        }
        else if((I-J)%3==2)
        {
            cout<<"Grapes\n";
        }

    }
    return 0;
}
