#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int coins[3];//making an array of coins cointainer and storing the number of coins in 5->coins[0]||10->coins[1]||15->coins[2]
        for(int i=0;i<3;i++)
        {
            coins[i]=0;
        }
        int n;
        cin>>n;
        int arr[n];
        int isfif=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==15)
            {
                isfif=1;
            }
        }
        if(isfif){
        int flag=0,left=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==5)
            {
                left+=5;
            }
            else
            {
                if(left>=(arr[i]-5))
                {
                    left=left-(arr[i]-5);
                    left+=5;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        }
        else
        {
            int flag=0;
            for(int i=0;i<n;i++)
            {
            if(arr[i]==5)
            {
                coins[0]++;//if coins of denomination 5 is inserted then always sold

            }
            else if(arr[i]==10)//if coin of denomination 10 is given to shopkeeper the he has to check the availibility of coin of denomination 5 if he has it woulsd be successful deal
            {
                if(coins[0]>=1)
                {
                    coins[1]++;
                    coins[0]--;

                }
                else
                {
                    flag=1;
                    break;
                }
            }
            else if(arr[i]==15)//if coin of denomination 15 is give then shopkeeper has to check whether he  has a coin of denomination 10 or 2 coins of denomination 5
            {
                if(coins[0]>=2)
                {
                    coins[2]++;
                    coins[0]-=2;

                }
                else if(coins[1]>=1)
                {
                    coins[2]++;
                    coins[1]--;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        }
    }
    return 0;
}
