#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    stack <int> s1;
    stack <int> s2;
    queue <int> q1;
    queue <int> q2;
    int n,x,z;
    cin>>n;
   int y=n/2,b=y/2;
    z=n;
    while(n--)
    {
        cin>>x;
        q1.push(x);
    }
     while(y--)
    {
        s1.push(q1.front());
        q1.pop();
    }
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    for(int i=0;i<z;i++)
    {
        if(i%2==0)
        {
            q2.push(s2.top());
            s2.pop();
        }
        else
        {
            q2.push(q1.front());
            q1.pop();
        }
    }
    while(!q2.empty())
    {
        cout<<q2.front()<<"\t";
        q2.pop();
    }
    cout<<"\n";
    }
    return 0;
}
