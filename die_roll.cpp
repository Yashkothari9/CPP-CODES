#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int large;
    if(m>n)
    {
        large=m;
    }
    else
    {
        large=n;
    }
    int i=1;
    int num=6-large+1;
    int den=6;
    while(i<7)
    {
        if(num%i==0 && den%i==0)
        {
            num=num/i;
            den=den/i;
        }
        i++;
    }
    cout<<num<<"/"<<den;
    return 0;

}
