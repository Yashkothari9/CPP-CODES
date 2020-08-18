#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[9][9];
        string s[9];
        for(int i=0;i<9;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                a[i][j]=s[i][j]-48;
            }
        }
        a[0][0]=a[0][1];
        a[1][3]=a[1][4];
        a[2][6]=a[2][7];
        a[3][1]=a[3][2];
        a[4][4]=a[4][5];
        a[5][7]=a[5][8];
        a[6][2]=a[6][1];
        a[7][5]=a[7][4];
        a[8][8]=a[8][7];
         for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
               cout<<a[i][j];
            }cout<<"\n";
        }
    }
    return 0;
}
