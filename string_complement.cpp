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
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> str;
        string s;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            str.push_back(s);
        }//cout<<"hi"<<"\n";
        int counti=0;
        for(int i=0;i<n;i++)
        {//cout<<"hi1"<<"\n";
            string x=str[i];
            for(int j=i+1;j<n;j++)
            {//cout<<"hi2"<<"\n";
                string y=str[j]+x;
                string e=x+str[j];
                if(is_palindrome(y))
                {
                 //   cout<<y;
                    counti++;
                }
                if(is_palindrome(e))
                {
                   // cout<<x;
                    counti++;
                }
               // cout<<e<<" "<<y<<"\n";
            }
        }
        cout<<counti<<"\n";
    }
    return 0;
}
