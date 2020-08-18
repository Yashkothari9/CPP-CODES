#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x[100],i=0,flag=0;
        cin.ignore();
        vector <int> a;
        char s[1000];
        scanf("%[^\n]",s);
        //cout<<s;
        char a1[10]={'1'};
            //scanf(" %[^\n]s",s);
            //cout<<s;
            int d=0,j=0;
            for(int i=0;s[i]!='\0';i++)
            {
                a1[j]=s[i];
                //cout<<c<<" "<<j<<endl;
                if(s[i]==' '||s[i+1]=='\0')
                 {  if(s[i+1]!='\0')
                       a1[j]='\0';
                    else
                        a1[j+1]='\0';
                    //cout<<c<<endl;
                    d=atoi(a1);
                    a.push_back(d);
                    //cout<<d<<" ";
                    j=0;
                 }
                 else
                 {
                     j++;
                 }
             }
        int u,w,m;
        m=i;
        cin>>u>>w;
        int c[100]={0};
       for(int k=u-1;k<w;k++)
        {
            c[a[k]]++;
        }
        for(int h=u-1;h<w;h++)
        {
            if((c[a[h]]!=0)&&(c[a[h]]%2==0))
               {
                   cout<<a[h]<<" ";
                   c[a[h]]=0;
                   flag=1;
               }
        }
        if(flag==0)
        {
            cout<<"NULL";
        }
        cout<<"\n";
        }
return 0;
}

