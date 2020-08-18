#include<bits/stdc++.h>
using namespace std;
void printmatrix(int a[][],int n,int m)
{
    for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
            cout<<a[i][j]<<" ";
         }
         cout<<"\n";
     }
}
int main()
{
    long long int n,m,x,y,z,p;
    cin>>n>>m>>x>>y>>z>>p;
    int count=1;
    int a[n][m];
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
            a[i][j]=count++;
         }
     }
     printmatrix(a);
return 0;
}
