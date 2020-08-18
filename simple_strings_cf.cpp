#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int counti=0;
    int n=1;
    for(int i=1;i<a.size();i++)
    {
        if(a[i]==a[i-1])
        {
            n++;
            cout<<"i:"<<i<<"\n";
        }
        else
        {
            if(n>1){counti+=n/2;}
            n=1;
        }
    }
    //cout<<counti<<"\n";
    if(n>1){counti+=n/2;}
    if(n==1){counti=0;}
    cout<<n<<" ";
    return 0;
}
