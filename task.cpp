#include<bits/stdc++.h>
using namespace std;
typedef struct task
{
    int input;
    int index;
}task;
bool comp(task a,task b)
{
    return a.input < b.input;
}
int main()
{
    int t;
    //char c;
    cin>>t;
    while(t--)
    {

        int sum=0;
       // char ch;
       int tas;
        float cusum=0;
        cin>>tas;
        task a[tas];
        for(int i=0;i<tas;i++)
        {
            cin>>a[i].input;
            a[i].index=i+1;
        }
        sort(a,a+tas,comp);
        for(int j=0;j<tas;j++)
        {
            sum+=a[j].input;
            cusum+=sum;
        }
        for(int i=0;i<tas;i++)
        {
            cout<<a[i].index<<endl;
        }
        float output=(float)((cusum)/(float)tas);
        cout<<output<<"\n";
    }
    return 0;
}
