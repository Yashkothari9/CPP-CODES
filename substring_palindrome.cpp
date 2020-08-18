#include<bits/stdc++.h>
using namespace std;
int is_palindrome(string s)
{
    int x=s.size();
    for(int i=0;i<=x/2;i++){
        if(s[i] != s[x-i-1])
            {
            //flag = 1;
            return 0;
            }
    }
    return 1;
}
int main()
{
 int n;
 string s;
 cin>>n>>s;
 int maxi=0;
 for(int i=0;i<n-1;i++)
 {
     for(int j=i;j<n;j++)
     {
         if(is_palindrome(s.substr(i,j-i+1)))
         {
             cout<<s.substr(i,j-i+1)<<"\n";
            if(maxi<(j-i+1))
            {
                maxi=j-i+1;
               // cout<<s.substr(i,j-i+1)<<" "<<maxi<<"\n";
            }
         }
     }
 }
 cout<<maxi;
 return 0;
}
