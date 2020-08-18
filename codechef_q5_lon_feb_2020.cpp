#include<bits/stdc++.h>
using namespace std;
long long int calc(long long int y,int m)
{
    int w[7]={0};
    int point=5;
    long long int count=0;
    if(y<=2020)
    {count=0;
        if(m<=2)
        {//cout<<"using m<=2";
            for(long long int i=2020;i>=y;i--)
            {
                if((i%400==0)||(i%4==0))
                {
                    point=(point-2)%7;
                    if(point==-1)
                    {
                        point=6;
                    }
                    else if(point==-2)
                    {
                        point=5;
                    }
                    //cout<<"year:"<<i<<" point:"<<point<<"\n";
                }
                else
                {
                    point=(point-1)%7;
                    if(point==-1)
                    {
                        point=6;
                    }
                    else if(point==-2)
                    {
                        point=5;
                    }
                   // cout<<"year:"<<i<<" point:"<<point<<"\n";
                    //cout<<point<<" ";
                }
                if(point==6||point==5)
                {
                    if((i%400==0)||(i%4==0)&&point!=5)
                    {
                        continue;
                    }
                    else
                    {
                    //cout<<i<<"\n";
                    count++;
                    }
                }
            }
           // cout<<"\n";
        }
        else
        {//cout<<"using m>=2\n";
             for(long long int i=2020;i>y;i--)
            {
                if(i%400==0||(i%4==0))
                {

                    point=(point-2)%7;
                     if(point==-1)
                    {
                        point=6;
                    }
                    else if(point==-2)
                    {
                        point=5;
                    }
                //   cout<<"year:"<<i<<" point:"<<point<<"\n";
                //   cout<<point<<" ";
                }
                else
                {
                    point=(point-1)%7;
                     if(point==-1)
                    {
                        point=6;
                    }
                    else if(point==-2)
                    {
                        point=5;
                    }
                   // cout<<"year:"<<i<<" point:"<<point<<"\n";
                   // cout<<point<<" ";
                }
                if(point==6||point==5)
                {
                    if((i%400==0)||(i%4==0)&&point!=5)
                    {
                        continue;
                    }
                    else
                    {
                   // cout<<i<<"\n";
                    count++;
                    }
                }
            }
           // cout<<"\n";
        }

    }
    else if(y>2020)
    {point=4;
        if(m>=2)
        {
            for(long long int i=2020;i<=y;i++)
            {
                if((i-1)%400==0||((i-1)%4==0))
                {
                    point=(point+2)%7;
                    // cout<<"year:"<<i<<" point:"<<point<<"\n";
                 //   cout<<point<<" ";
                }
                else
                {
                    point=(point+1)%7;
                    // cout<<"year:"<<i<<" point:"<<point<<"\n";

                    //cout<<point<<" ";
                }
                if(point==6||point==5)
                {
                   if((i%400==0)||(i%4==0)&&point!=5)
                    {
                        continue;
                    }
                    else
                    {
                   // cout<<i<<"\n";
                    count++;
                    }
                  //  cout<<count<<" ";
                }
            }//cout<<"\n";
        }
        else
        {
             for(long long int i=2020;i<y;i++)
            {
                if((i-1)%400==0||((i-1)%4==0))
                {
                    point=(point+2)%7;
                     //cout<<"year:"<<i<<" point:"<<point<<"\n";

                    //cout<<point<<" ";
                }
                else
                {
                    point=(point+1)%7;
                   //  cout<<"year:"<<i<<" point:"<<point<<"\n";
                   //cout<<point<<" ";
                    //cout<<point<<" ";
                }
                if(point==6||point==5)
                {
                    if((i%400==0)||(i%4==0)&&point!=5)
                    {
                        continue;
                    }
                    else
                    {
                   // cout<<i<<"\n";
                    count++;
                    }
                    //cout<<count<<" ";
                }
            }//cout<<"\n";
        }
    }
//     else if(y==2020)
//     {
//         if(m==2)
//         {
//             count++;
//         }
//         else
//         {
//             count=0;
//         }
//     }
    return count;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m1,m2;
        long long int y1,y2;
        cin>>m1>>y1;
        cin>>m2>>y2;
        long long int ans=0;
       if(y1<=2020)
        {//cout<<"hm\n";
                 if(y2<=2020)
                {
                    if(y1<y2)
                    {
                        if(y2!=2020)
                        {
                        ans=calc(y1,m1)-calc(y2,m2);
                        }
                        else
                        {
                            if(m2<2)
                            {
                            ans=calc(y1,m1)-calc(y2,m2);
                            }
                            else
                            {
                            ans=calc(y1,m1)-calc(y2,m2)+1;
                            }
                        }

                    }
                    else if(y1==y2)
                    {
                        if((m1==m2)&&(y1!=2020))
                       {
                           if(m1!=2)
                           {
                              // cout<<"hi\n";
                           ans=0;
                           }
                           else
                           {
                               //cout<<"he\n";
                               ans=calc(y1,m1)-calc(y1+1,m1);
                           }
                       }
                       else if(y1==2020)
                       {
                           if(m1<=2 && m2>=2)
                           {
                               ans=1;
                           }
                           else if(m1<2&& m2<2)
                           {
                              ans =0;
                           }
                           else
                           {
                               ans=0;
                           }
                       }
                       else
                       {
                           //cout<<"ho\n";
                           ans=calc(y1,m2)-calc(y2,m2)+1;
                       }
                    }
                }
                else if(y2>2020)
                {
                    //if(m1==1)
                    //{
                    if(y1==2020)
                    {
                        if(m1<=2)
                        {
                            ans=calc(y1,m1)+calc(y2,m2);
                        }
                        else
                        {
                           // cout<<"ji\n";
                            ans=calc(y2,m2);
                        }
                    }
                    else
                    {
                    ans=calc(y1,m1)+calc(y2,m2);
                    }
                }

        }
        else
        {//cout<<"jh\n";
            if(y1<y2)
            {
                ans=calc(y2,m2)-calc(y1,m1);
            }
            else if(y1==y2)
            {
                        if(m1==m2)
                       {
                           if(m1!=2)
                           {
                           ans=0;
                           }
                           else
                           {
                               ans=calc(y1,m1)-calc(y1-1,m1);
                           }
                       }
                       else
                       {
                           ans=calc(y1,m2)-calc(y2,m2)+1;
                       }
            }
        }
       cout<<ans<<"\n";
     //  cout<<calc(2020,3)-calc(2020,1)<<"\n";
    //cout<<calc(2020,2);

    }
    return 0;
}
