#include<bits/stdc++.h>
using namespace std;
int pathRow[8]={0,0,1,1,-1,1,-1,1};
int pathCol[8]={1,-1,-1,1,1,0,0,,-1};
char** ch;
void FindWord(int r,int c,int row,int col,string word,int counti)
{
    if(row<0||col<0||row>r||col>c)
    {
        return 0;
    }
    else if(counti==word.size())
    {
        return 1;
    }
    else if(counti < word.size())
    {
        if(word[counti]==char[row][col])
        {
          FindWord(r,)
        }
        else
        {
            return 0;
        }
    }
        return 0;
}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int r,c,w;
        cin>>r>>c>>w;
        char ch[c][w];
        for(int i=0;i<r;++i)
        {
            for(int j=0;j<c;++j)
            {
                cin>>ch[i][j];
            }
        }
        vector <string>words;
        for(int i=0;i<w;++i)
        {
            string f;
            cin>>f;
            words.push_back(f);
        }
        for(int k=0;k<w;++k)
        {
            for(int i=0;i<r;++j)
            {int flag=0;
                for(int j=0;j<c;++j)
                {

                }

            }

        }
}
