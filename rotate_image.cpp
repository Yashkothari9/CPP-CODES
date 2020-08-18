#include<bits/stdc++.h>
using namespace std;
vector<int> extractInteger(string str)
{
	stringstream ss;
	ss << str;
	string temp;
	int found;
	vector <int> v;
	while (!ss.eof())
        {
		ss >> temp;
		if (stringstream(temp) >> found)
			v.push_back(found);
        }
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int n,y;
        //int c=0;
        cin>>n;
        cin.ignore();
        getline(cin,s);
        vector <int> c;
        int k,q=1,r=1;
            for(k=1;k<s.length()-1;k++)
            {
              if(s[q]=='[')
              {
                  if(s[k]==',')
                  {
                      r=k;

                  int l;
                  string s3="";
                  for(l=q+1;l<=r-1;l++)
                  {
                      s3=s3+s[l];
                  }
               //   cout<<s3<<"\n";
                char m[s3.length()];
                for(int u=0;u<s3.length();u++)
                {
                    m[u]=s3[u];
                }
                  int h;
                  h=std::atoi(m);
                  //cout<<h<<"\n";
                  if(h!=0)
                  c.push_back(h);
                  q=r;
                  }
              }
              if(s[q]==',')
              {
                  if(s[k]==',')
                  {
                      r=k;

                  int l;
                  string s3="";
                  for(l=q+1;l<=r-1;l++)
                  {
                      s3=s3+s[l];
                  }
                 // cout<<s3<<"\n";
                 char m[s3.length()];
                for(int u=0;u<s3.length();u++)
                {
                    m[u]=s3[u];
                }
                  int h;
                  h=std::atoi(m);
                  //cout<<h<<"\n";
                  if(h!=0)
                  c.push_back(h);
                  q=r;
                  }
              }
              if(s[q]==',')
              {
                  if(s[k]==']')
                  {
                      r=k;

                  int l;
                  string s3="";
                  for(l=q+1;l<=r-1;l++)
                  {
                      s3=s3+s[l];
                  }
                  //cout<<s3<<"\n";
                   char m[s3.length()];
                for(int u=0;u<s3.length();u++)
                {
                    m[u]=s3[u];
                }
                  int h;
                  h=std::atoi(m);
                //  cout<<h<<"\n";
                  if(h!=0)
                  c.push_back(h);
                  q=r;
                  }
              }
              if(s[k]=='[')
              {
                  q=k;
                  r=k;
              }
            }

       int a[100][100];
        int z=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(k<c.size())
                {
                a[i][j]=c[z++];
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
     return 0;
}
