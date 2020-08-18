#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string p;
    getline(cin,p);
    istringstream iss(p);
    iss>>t;
    while(t--)
    {
        string s;
        vector <string> a;
        getline(cin,s);
        int i=0,j=0;
       // int x=s.size();
        int m;
        while(i<s.size())
        {
            if(s[i]=='"' &&s[i+1]!=',')
            {   i++;
                m=i;
                while()

                /*while(s[i]!=34)
                {
                    i++;
                }
                if(m!=i)
                {
                a.push_back(s.substr(m,i-1));
                //a.push_back(" ");
                }
                else {i++;}*/
                for(int)
            }
            else
            {i++;}
        }
        for(auto i=a.begin();i!=a.end();i++)
        {
            cout<<*i<<"\t";
        }


    }
    return 0;

}

