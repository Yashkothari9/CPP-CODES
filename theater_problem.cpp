#include<bits/stdc++.h>
using namespace std;
int isvalid(int ay[5][4],int r,int c)
{
    int val= ay[r][c];
    if(c==3)
    {
        return 1;
    }
    else
    {int oflag=0;
        for(int i=c+1;i<4;i++)
        {
            if(ay[r][i]>val)
            {int flag=1;
                int max=ay[r][i];
                for(int k=0;k<4;k++)
                {
                    if(k==r)
                    {
                        continue;
                    }
                    else
                    {
                        if(ay[k][i]>max)
                        {
                            flag=0;
                            break;
                        }
                        else if(ay[k][i]<max)
                        {
                            continue;
                        }
                    }
                }
                if(flag==1)
                {

                    oflag=1;
                }
                else
                {
                    continue;
                }
            }

        }

        if(oflag==1)
        {
            return 0;
        }
        else
        {

                if(r<3 &&c<3)
                { int flao=0;
                    for(int i=r+1;i<4;i++)
                    {
                        int fla=1;
                        int b=ay[i][c];
                        for(int j=0;j<4;j++)
                        {
                            if(j==r)
                            {
                                continue;
                            }
                            else
                            {
                                if(ay[c+1][r]<ay[c+1][j])
                                {
                                    fla=0;
                                    break;
                                }
                                else
                                {
                                    continue;
                                }
                            }
                        }
                        if(fla==1)
                            {
                             if((ay[i][c]+ay[r][c+1])>ay[r][c])
                             {
                                 return 0;
                             }
                             else
                             {

                                 continue;
                             }
                            }
                    }
                }


            return 1;
        }
    }
}
int main()
{
    int t,net_cost=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ay[5][4];
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<4;j++)
            {
                ay[i][j]=0;
            }
        }
        int r,c;
        char ch;
        int ti;
        //cout<<"hi\n";
        //cout<<"N : " << n<<"\n";
        int i=0;
        while(n-- > 0)
        {
            //cout << "i: " << i++ << "\n";
            cin >> ch >> ti;
            //cout << "OK : " << endl;

            if(ch=='A')
            {r=0;}
            else if(ch=='B')
            {r=1;}
            else if(ch=='C')
            {r=2;}
            else if(ch=='D')
            {r=3;}


            if(ti==12)
            {c=0;}
            else if(ti==3)
            {c=1;}
            else if(ti==6)
            {c=2;}
            else if(ti==9)
            {c=3;}

            //r = 1; c = 2;
            //c = (ti/3)%4;

            //cout << "hi2" << endl;
            ay[r][c]++;

        }
        // for(int i=0;i<5;i++)
        //     {
        //         for(int j=0;j<4;j++)
        //         {
        //             cout<<ay[i][j]<<" ";
        //         }cout<<"\n";
        //     }
        //     cout<<"\n";
        //cout<<"himiddle" << endl;
        int max;
        for(int j=0;j<4;j++)
        {
            max=ay[0][j];
            int sel=0;
            for(int i=1;i<4;i++)
            {
                //cout<<"hi3" << endl;
                if(max<ay[i][j])
                {
                    if(isvalid(ay,i,j))
                    {
                    max=ay[i][j];
                    sel=i;
                    }
                    else
                    {
                        ay[i][j]=0;
                    }
                }
            }
            if(sel==0)
            {
                int z=isvalid(ay,0,j);
                if(z==1)
                {
                    ay[4][j]=max;
                    if(max!=0)
                    {
                    for(int k=0;k<4;k++)
                        {
                            ay[sel][k]=0;
                        }
                    }
                }
            }
            else
            {
            ay[4][j]=max;
            if(max!=0)
            {
            for(int k=0;k<4;k++)
            {
                ay[sel][k]=0;

            }
            }
            }
            // for(int i=0;i<5;i++)
            // {
            //     for(int j=0;j<4;j++)
            //     {
            //         cout<<ay[i][j]<<" ";
            //     }cout<<"\n";
            // }
            // cout<<"\n";
        }
        int w[4]={0};
        for(int i=0;i<4;i++)
        {
            w[i]=ay[4][i];
        }
        sort(w,w+4);
        int cost=0;
        //cout<<"hi4" << endl;
        for(int i=3;i>=0;i--)
        {
            if(w[i]==0)
            {
                cost-=100;
            }
            else
            {
                cost+=((w[i])*(i+1)*25);
            }
        }
        cout<<cost<<"\n";
        net_cost+=cost;
        //cout<<"hi7" << endl;
    }
    cout<<net_cost<< endl;
    return 0;
}
