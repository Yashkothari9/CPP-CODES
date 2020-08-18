#include<bits/stdc++.h>
using namespace std;
/*void selection_sort(vector <string> &a, int n)
{
int i,j,min;
string temp;
  for(i=0;i<n-1;i++)
   {  min=i;
     for(j=i+1;j<n;j++)
       {
         if (stringCompare(a[min],a[i])
          {
            min = j;
         swap(a[min],a[j]);
          }
        }
}
}*/
bool stringCompare( const string &left, const string &right ){
   for( string::const_iterator lit = left.begin(), rit = right.begin(); lit != left.end() && rit != right.end(); ++lit, ++rit )
      if( tolower( *lit ) < tolower( *rit ) )
         return true;
      else if( tolower( *lit ) > tolower( *rit ) )
         return false;
   if( left.size() < right.size() )
      return true;
   return false;
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
        string s,y;
        int c=0,i=0;
        vector <string> a;
        getline(cin,s);
        istringstream iss(s);
        while(iss>>y)
        {   c++;
            a.push_back(y);
        }

    //selection_sort(a,c);
sort( a.begin(), a.end(), stringCompare );   //sort(v.begin(),v.end());
 /*for(auto i = a.begin() ; i!= a.end();++i)
    {
        cout<<*i<<"\t";
    }
*/for (auto x : a)
        cout << x << " ";
        cout<<"\n";
    }

return 0;
}
