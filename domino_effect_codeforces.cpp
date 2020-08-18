#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    char prev='A';
    int countp=0,counti=0,i=0;
    while(i<n)
    {
     if(s[i]=='.')
     {
         countp++;

     }
     if(s[i]=='R')
     {
         if(prev=='A')
         {
             counti+=countp;
             countp=0;
         }
         else if(prev=='L')
         {
             counti+=countp;
             countp=0;
         }
         else
         {
             countp=0;
         }
         prev='R';
     }
     if(s[i]=='L')
     {
         if(prev=='A')
         {
             countp=0;
             //prev='L';
         }
         else if(prev=='R')
         {
             if(countp%2==0)
             {
               countp=0;

             }
             else
             {
                 counti++;
                 countp=0;
             }
         }
         else
         {
             countp=0;
         }
         prev='L';
     }
     if(i==n-1 && s[i]=='.'&& prev=='L')
     {
         counti+=countp;
     }
     if(i==n-1 && s[i]=='.' && prev=='R')
     {
         countp=0;
     }
     if(i==n-1&& s[i]=='.' && prev=='A')
     {
         counti+=countp;
     }
      i++;
    }
    cout<<counti<<"\n";
    return 0;

}
