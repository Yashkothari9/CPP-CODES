#include <bits/stdc++.h>
using namespace std;
int min(int a,int b,int c)
{
    if(a<=b && a<=c)
    {
        return a;
    }
    else if(b<=a && b<=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

int edit_distance(string s1,string s2)
{
     int p,q;
     p=s1.size()+1;
     q=s2.size()+1;
     int c[p][q];
     for(int i=0;i<=p;i++)
     {
         for(int j=0;j<=q;j++)
         {
             c[i][j]=0;
         }
     }
     for(int i=0;i<p;i++)
     {
         for(int j=0;j<q;j++)
         {
             if(i==0)
             {
                 c[0][j]=j;
                 //cout<<c[0][j]<<" ";
             }
             else if(j==0)
             {
                 c[i][0]=i;
               //  cout<<c[i][0]<<" ";

             }
             else if(s1[i]==s2[j])
             {
                 c[i][j]=c[i-1][j-1];
             //    cout<<c[i][j]<<" ";
             }
             else
             {
             c[i][j]=1+min(c[i-1][j],c[i][j-1],c[i-1][j-1]);
           //  cout<<c[i][j]<<" ";
             }
        }
       // cout<<"\n";
    }

    // for(int i=0;i<p;i++)
    // {
    //     for(int j=0;j<q;j++)
    //     {
    //         cout<<c[i][j]<<" ";
    //     }cout<<"\n";
    // }
     cout<<c[p-1][q-1]<<"\n";
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int p,q;
        cin>>p>>q;
        string s1,s2;
        cin>>s1>>s2;
        edit_distance(s1,s2);
    }
	//code
	return 0;
}
