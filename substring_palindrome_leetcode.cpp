/*int countSubstrings(string s) {
    int num = s.size();
    for(float center = 0.5; center < s.size(); center += 0.5) {
        int left = int(center - 0.5), right = int(center + 1);
        while(left >= 0 && right < s.size() && s[left--] == s[right++]) ++num;
    }
    return num;
}   */
//shortest way to find palindrome





#include<bits/stdc++.h>
using namespace std;
    int check_pali(string s)
    {
        int x=s.size();
        for(int i=0;i<=x/2;i++)
        {
            if(s[i] != s[x-i-1])
            {
            //flag = 1;
            return 0;
            }
        }
    return 1;
    }
int countSubstrings(string s) {
        int count=s.size();
        if(count>2)
        {
               for(int i=0;i<s.size();i++)
               {
                   for(int j=i;j<s.size();j++)
                   {
                       if(check_pali(s.substr(i,j-i+1))==1)
                       {
                           //cout<<s.substr(i,j-i+1)<<"\n";
                           count++;
                       }
                   }
               }
            count-=s.size();
        }
        else
        {
            if(s.size()==1)
            {
                count=1;
            }
            else if(s.size()==2)
            {
                if(check_pali(s)==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
 int main()
 {
    string s;
    cin>>s;
    cout<<countSubstrings(s)<<"\n";
return 0;
}


