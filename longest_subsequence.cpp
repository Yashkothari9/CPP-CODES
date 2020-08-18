#include<bits/stdc++.h>
using namespace std;


vector<vector<int> > my_sub_sequence(int *a, int n) {
    vector<vector<int> > v;
    for(int i = 1 ; i < (1 << n) ; ++i) {
        int c = i, pos = 0;
        vector<int> temp;
        while(c > 0) {
            if(c % 2 == 1) temp.push_back(a[pos]);
            c /= 2;
            ++pos;
        }
        cout<<"at "<<i+1<<"th iteration"<<"- ";
        for(int i=0;i<temp.size();i++)
        {
            cout<<temp[i]<<" ";
        }cout<<"\n";
        v.push_back(temp);
    }
    return v;
}
void check(vector<vector<int> > br,int n,int k)
{

    vector<int> a;
    int s,sizei=0;
    int point=0;
    float avg;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        s=0;
        for(int j=0;j<br[i].size();j++)
        {
            s+=br[i][j];
        }
        sizei=br[i].size();
        avg=(float)s/(float)br[i].size();
        if((avg<=k)&&(maxi<sizei))
        {
            maxi=sizei;
            point=i;
        }
    }
    cout<<"avg"<<avg<<"\n";
    cout<<"maxi= "<<maxi<<"\n";
    for(int j=0;j<br[point].size();j++)
    {
        cout<<"br["<<point<<"]["<<j<<"]"<<br[point][j]<<" ";
    }cout<<"\n";

}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int m,k;
        cin>>m;
        cin>>k;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        vector<vector<int> > br;
        br=my_sub_sequence(a,m);
        for(int i=0;i<br.size();i++)
        {
            for(int j=0;j<br[i].size();i++)
            {
                cout<<br[i][j]<<" ";
            }cout<<"\n";
        }
        int f=pow(2,m)-1;
        check(br,f,k);
    }
    return 0;
}
