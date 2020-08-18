#include<bits/stdc++.h>
using namespace std;
string check_path(long long r,long long c,long long row,long long col,long long i,char dir )
{
    if(dir=='A')
    {

        if(row==r &&col==c)
        {
            return "IMPOSSIBLE";
        }
        else
        {cout<<"hi\n";
            string e="";
            string w="";
            string n="";
            string s="";
            long long int ea=pow(2,i-1);
            int flg=0;
             n=n+check_path(r,c,row+ea,col,i+1,'N');
             if(n!="" &&flg==0){flg=1;cout<<"hi1\n";return n;}
             s=s+check_path(r,c,row-ea,col,i+1,'S');
             if(flg==0 && s!=""){flg=1;cout<<"hi2\n";return s;}
             e=e+check_path(r,c,row,col+ea,i+1,'E');
             if(flg==0 && e!=""){flg=1;cout<<"hi3\n";return e;}
             w=w+check_path(r,c,row,col-ea,i+1,'W');
             if(flg==0 && w!=""){flg=1;cout<<"hi4\n";return w;}

             if(flg==0)
             {cout<<"hi5\n";
                 string q="IMPOSSIBLE";
                 return q;
             }

        }
    }
    else
    {
     string wop="";
    if(r<0)
    {
        if(row<r)
        {
            return wop;
        }
    }
    else if(r>0)
    {
        if(row>r)
        {
            return wop;
        }
    }
    if(c<0)
    {
        if(col<c)
        {
            return wop;
        }
    }
    else if(c>0)
    {
        if(col>c)
        {
            return wop;
        }
    }
    if(row==r && col==c)
    {
        wop=wop+dir;
        return wop;
    }
    else
    {
            string e="";
            string w="";
            string n="";
            string s="";
            long long int ea=pow(2,i-1);
            int flg=0;
             n=n+check_path(r,c,row+ea,col,i+1,'N');
             if(n!="" &&flg==0){flg=1;cout<<"hi6\n";return n;}
             s=s+check_path(r,c,row-ea,col,i+1,'S');
             if(flg==0 && s!=""){flg=1;cout<<"hi7\n";return s;}
             e=e+check_path(r,c,row,col+ea,i+1,'E');
             if(flg==0 && e!=""){flg=1;cout<<"hi8\n";return e;}
             w=w+check_path(r,c,row,col-ea,i+1,'W');
             if(flg==0 && w!=""){flg=1;cout<<"hi9\n";return w;}

             if(flg==0)
             {
                 cout<<"hi10\n";
                 return wop;
             }
    }
    }
}
int main()
{
    int t;
    cin>>t;
    for(int Case=1;Case<=t;Case++)
    {
        int r,c;
        cin>>r>>c;
        string s=check_path(r,c,0,0,1,'A');
        cout<<"Case #"<<Case<<": "<<s;
    }
    return 0;
}
