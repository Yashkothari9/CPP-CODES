#include<bits/stdc++.h>
using namespace std ;
typedef struct job{
    string id;
int ft;
int st;
}job;
bool cmp(job a,job b)
{
    return a.ft < b.ft;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        job *j1 = new job[n];
        for(int i=0;i<n;i++)
        {
            cin>>j1[i].id>>j1[i].st>>j1[i].ft;
        }
        //for(int i = 0 ; i < n ; ++i) cout << j1[i].id << " " << j1[i].st << " " << j1[i].ft << endl;

        /*for(int m=0;m<n;m++)
        {
            cout<<j1[m].d<<" ";
        }*/
        sort(j1,j1+n,cmp);
        //cout<<j1[0].id<<" "<<j1[0].st<<" "<<j1[0].ft<<"\n";
        job j = j1[0];
        for(int l=1;l<n;l++)
        {
            if((j1[l].st>=j.ft))//&&(j1[i].st>j1[i-1].st))
            {
                cout << j.id << " " << j.st << " " << j.ft << "\n";
                j = j1[l];
                /*if((j1[l].ft) == (j1[l-1].ft))
                {
                    continue;
                }
                else{
                cout<<j1[l].id<<" "<<j1[l].st<<" "<<j1[l].ft<<"\n";
                }*/
            }
        }
        cout << j.id << " " << j.st << " " << j.ft << "\n";
    }
    return 0;
}
