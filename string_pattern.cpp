#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        cin>>n;
        int *a  = new int[n];
        for(int i=0;i<n;++i)
        {
            scanf("%d", a + i);
        }
        vector<char * > ch;

        for(int i=0;i<n;i++)
        {
            char *h = (char*) malloc(sizeof(char)*100);
            scanf(" %[^\n]s",h);
            ch.push_back(h);
        }
        int cou=0;
        for(int j=0;j<n;j++)
        {int counti=0;//cout<<"yo\n";
            for(int k=0;k<strlen(ch[j]);k++)
            {//cout<<"yo1\n";
               if(ch[j][k]=='a')
               {
                   counti++;

               }
               if(ch[j][k]=='e')
               {
                   counti++;

               }
               if(ch[j][k]=='i')
               {
                   counti++;

               }
               if(ch[j][k]=='o')
               {
                   counti++;

               }
               if(ch[j][k]=='u')
               {
                   counti++;

               }
               if(ch[j][k]=='y')
               {
                   counti++;

               }
            }
          //  cout<<counti<<"\n";
            if(counti==a[j])
            {
                cou++;
            }
        }
        if(cou==n)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }
    return 0;
}
