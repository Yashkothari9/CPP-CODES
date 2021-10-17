#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int ones = 0, zeros = 0;
        int n = s.size();
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                ones++;
            }
            if(s[i]=='0') {
                zeros++;
            }
        }
        int mini=min(ones,zeros);
        string ans;
        if(mini%2==0)
        {
            ans="NET";
        }
        else
        {
            ans="DA";
        }
        cout<<ans<<"\n";
    }
    return 0;
}
