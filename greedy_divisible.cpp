#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        string s;
        cin>>s;
        int r[10]={0};

        int *a=new int[s.size()];
        for(int i=0;i<s.size();i++)
        {
            a[i]=s[i]-48;
            r[s[i]-48]++;
        }
        int l=0,k=0;
        int flag=0;
        int n=s.size();
        int counti=0;
        int mini = INT_MAX;
        int x=0;
        for(int i=0;i<s.size();i++)
          {

           for(int j=0;j<s.size();j++)
            {
              if(i!=j)
              {
                if((a[i]==2&&a[j]==5)||(a[i]==5&&a[j]==0)||(a[i]==7&&a[j]==5)||(a[i]==0&&a[j]==0))
                 {
                     if(i<j)
                   {
                       counti=(n-1-i)+(n-2-j);
                       //cout << "Before zero check : " << counti << " ";
                       counti = (a[i + 1] == 0 && j != i + 1) ? counti + 1 : counti;
                       //cout << "i : " << i << ", j : " << j << ", cost : " << counti << "\n";
                   }
                   else
                   {
                    counti=(n-1-i)+(n-2-j) + 1;
                    //cout << "Before zero check : " << counti << " ";
                    counti = (a[j + 1] == 0 && i != j + 1) ? counti + 1 : counti;
                    //cout << "i : " << i << ", j : " << j << ", cost : " << counti << "\n";
                   }

                      mini = min(counti, mini);
                 }

              }

            }
          }
         if(mini == INT_MAX)
         {
             mini=-1;
         }
         cout<<mini<<"\n";

    }
    return 0;
}
