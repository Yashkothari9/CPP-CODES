#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin>>test_case;
    int i;
    for(i=0;i<test_case;i++)
    {
        int k;
        cin>>k;
        int n;
        cin>>n;
        vector <int> a;
        vector <int> cache;
        //cache.resize(k,-1);
        int cache_element=0;
        int j;
        for(j=0;j<n;j++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int cache_miss=0;
        for(j=0;j<n;j++)
        {

            if(cache_element<k)
            {
                vector <int>::iterator it;
                it=find(cache.begin(),cache.end(),a[j]);
                if(it==cache.end())
                {
                    cache_miss++;
                    cache_element++;
                    cache.push_back(a[j]);
                   // cout<<"cache miss "<<j<<"\n";

                }
            }
            else
            {
                vector <int>::iterator it;
                it=find(cache.begin(),cache.end(),a[j]);
                if(it==cache.end())
                {
                    cache_miss++;
                    int max=j,temp=j;
                    int d,e;
                    int k;
                    for(k=0;k<cache.size();k++)
                    {
                        int x;
                        for(x=j+1;x<n;x++)
                        {
                            if(a[x]==cache[k])
                            {
                                temp=x;
                                break;
                            }
                            temp=x;
                        }
                        if(temp>=max)
                        {
                            max=temp;
                            d=k;
                        }

                    }
                    cache[d]=a[j];
                   // cout<<"cache miss "<<j<<"\n";

                }
            }
        }
       /* if(cache_element<k)
        {
            vector <int>::iterator it;
            it=find(cache.begin(),cache.end(),a[j]);
            if(it==cache.end())
            {
                cache_miss++;
                cache_element++;
                cache.push_back(a[j]);
                cout<<"cache miss "<<j<<"\n";
            }
        }
        else
        {
            vector <int>::iterator it;
            it=find(cache.begin(),cache.end(),a[j]);
            if(it==cache.end())
            {
                cache_miss++;
            }
        }
        */
            cout<<cache_miss<<"\n";
    }
    return 0;
}
