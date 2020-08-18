#include<bits/stdc++.h>
using namespace std;
vector<int> comp(int n,int player,int alpha,int beta)
{
    if(n==1 && player==1)
    {
        //cout<<"hi2\n";
        vector<int> ap1;//ap1[0]=no. of sticks,ap1[1]=players,ap[2]=alpha,ap1[3]=beta
        ap1.push_back(1);
        ap1.push_back(1);
        ap1.push_back(-1);
        ap1.push_back(beta);
        return ap1;
    }
    else if(n==1 && player==2)
    {
        //cout<<"hi3\n";
        vector<int> ap2;
        ap2.push_back(1);
        ap2.push_back(2);
        ap2.push_back(alpha);
        ap2.push_back(1);
        return ap2;
    }
    else
    {int i;
        for(int j=1;j<4;j++)
        { i=4-j;
          if(n>i)
          {
            if(player == 1)
            {
                //cout<<"hi9\n";
                vector<int> arr;
                arr=comp(n-i,2,alpha,beta);
                //cout<<"hi\n";
                if(arr[2]<arr[3])
                {
                    alpha=arr[3];
                }
                if(alpha==1 || alpha>beta)
                {
                    break;
                }
            }
            else
            {//cout<<"hi1\n";
                vector<int> arr1;
                arr1=comp(n-i,1,alpha,beta);
                if(arr1[2]<arr1[3])
                {
                    beta=arr1[2];
                }
                if(beta == -1 || alpha>beta)
                {
                    break;
                }
            }

          }
        vector<int> man;
        man.push_back(i);
        man.push_back(player);
        man.push_back(alpha);
        man.push_back(beta);
        return man;
        }

    }

}
int main()
{
    cout<<"This is a game of sticks played by two AI's\n";
    cout<<"there are two players player1 and player2\n";
}
