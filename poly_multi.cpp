#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int t;
    cin>>t;
    while(t--)
    {

    string s1,s2;
        cin.ignore();
        getline(cin,s1);
        getline(cin,s2);
        vector <int> a;
        vector <int> b;
        stringstream ss;
        ss << s1;
        while(!ss.eof())
        {
            string temp;
            int t;
            ss >> temp;
            if(stringstream(temp) >> t)
            {
                a.push_back(t);
            }
            temp="";
        }
        stringstream ss1;
        ss1 << s2;
        while(!ss1.eof())
        {
            string temp;
            int t;
            ss1 >> temp;
            if(stringstream(temp) >> t)
            {
                b.push_back(t);
            }
            temp="";
        }
   // long long int m=d;
    int m=b.size();
    int n=a.size();
    cout<<a[0];
    for(int k=1;k<n;k++)
        {
            cout<<"+"<<a[k]<<"x^"<<k;
        }
        cout<<"\n";
    cout<<b[0];
        for(long long int l=1;l<m;l++)
        {
          cout<<"+"<<b[l]<<"x^"<<l;
        }

    long long int w=m+n-1;
    long long int su[w];
    for(long long int o=0;o<w;o++)
    {
        su[o]=0;
    }
    for(long long int i=0;i<n;i++)
    {
        for(long long int j=0;j<m;j++)
        {
            su[i+j]+=(a[i]*b[j]);
        }
    }
    cout<<"\n";
    cout<<su[0];
    for(long long int l=1;l<w;l++)
        {
          cout<<"+"<<su[l]<<"x^"<<l;
        }
        cout<<"\n";
    }
    return 0;
}
