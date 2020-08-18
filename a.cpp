#include<bits/stdc++.h>
using namespace std;
  /*vector<vector<string>>find_anagrams(vector<string>& str)
{
    unordered_map<string,vector<string>> maps ;
    vector<vector<string>> v1;
    for(int i=0;i<str.size();i++)
    {
        string m=str[i];
        sort(m.begin(),m.end());
        maps[m].push_back(str[i]);
    }
 for(auto n: maps)
        {
            v1.push_back(n.second);
        }
        //cout<<"[";
    return v1;
}*/
vector<vector<string> > groupAnagrams(vector<string>& input_set)
{

	unordered_map<string, vector<string> > my_map;
	vector<vector<string> > final_set;

	for (int i = 0; i < input_set.size(); i++)
	{

		string key = input_set[i];
		sort(key.begin(), key.end());
		my_map[key].push_back(input_set[i]);

	}

	for (auto n : my_map)
	{
       		final_set.push_back(n.second);
	}

	return final_set;
}
int main()
{
    int t;
    string p;
    getline(cin,p);
    istringstream iss(p);
    iss>>t;
    while(t--)
    {
        int c=0;//a=0,z=0;
        string s;
        vector <string > str;
        getline(cin,s);
        int x= s.length();
        int b[x];
        int m,a,z;

          int j=0;
        for(int i=0;i<x;i++)
        {
            if(s[i]=='"')
            {
                b[j++]=i;
               // cout<<i<<"\t";
            }
        }
        for(int k=0;k<j;k=k+2)
        {
            a=b[k];
            z=b[k+1];
            int len=z-a-1;
           // cout<<s.substr(a+1,a-z-2)<<"\t";
            str.push_back(s.substr(a+1,len));
        }
       vector<vector<string>>v1= groupAagrams(str);
       cout<<"[";
        for(int i=0;i<v1.size();i++)
    {
        if(v1[i].size()>0)
        {
            cout<<"[";
            for(int j=0;j<v1[i].size();i++)
            {
                cout<<"\""<<v1[i][j]<<"\",";
            }
            cout<<"]";
        }
    }cout<<"]";

    }
    return 0;
}
