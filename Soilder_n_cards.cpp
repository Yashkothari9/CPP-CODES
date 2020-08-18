#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
int main()
{
    int n;
    cin>>n;
    queue<int> player_1;
    queue<int> player_2;
    int k1;
    cin>>k1;
    int a[k1];
    for(int i=0;i<k1;i++)
    {
        cin>>a[i];
    }
    int k2;
    cin>>k2;
    int b[k2];
    for(int j=0;j<k2;j++)
    {
        cin>>b[j];
    }
    for(int i=0;i<k1;i++)
    {
     player_1.push(a[i]);
    }
    for(int i=0;i<k2;i++)
    {
     player_2.push(b[i]);
    }
    int larger=factorial(n+1);
    int count=0;
    int flag=0;
    while(!player_1.empty() && !player_2.empty())
    {count++;
        if(count>=larger)
        {
            flag=1;
            break;
        }
        if(player_1.front()>player_2.front())
        {
            player_1.push(player_2.front());
            int sw=player_1.front();
            player_1.pop();
            player_1.push(sw);
            //cout<<"player_2 "<<player_2.front()<<"\n";
            player_2.pop();

        }
        else if(player_2.front()>player_1.front())
        {
            player_2.push(player_1.front());
            int ew=player_2.front();
            player_2.pop();
            player_2.push(ew);
            //cout<<"player_1 "<<player_1.front()<<"\n";
            player_1.pop();
        }
    }
    if(flag==1)
    {
        cout<<"-1\n";
    }
    else{
    int ans=0;
        if(player_1.empty())
        {
            cout<<count<<" "<<"2\n";
        }
        else
        {
            cout<<count<<" "<<"1\n";
        }
    }
    return 0;
}
