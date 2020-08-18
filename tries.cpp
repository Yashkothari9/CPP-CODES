#include <iostream>
using namespace std;

typedef struct trie{
    char ch ;
    int prefix;
    trie ar[26];
}trie;

trie initialize(void)
{
    trie *vertex= new trie;
    vertex.words=0;
    vertex.prefix=0;
    for(int i=0;i<26;i++)
    {
        vertex.ar[i]=0;
    }
    return vertex;
}
trie insert(trie root,string word)
{
    trie ptr=root;
    for(int i=0;i<word.size();i++)
    {
        int index=word[i]-'a';
        if(!ptr.ar[index])
        {
            ptr.ar[index]=initialize()
        }
        ptr=ptr.ar[index];
    }
    ptr.prefix++;

}
bool search(trie root,string word)
{
    trie ptr=root;
    for(int i=0;i<word.size();i++)
    {
        int index=word[i]-'a';
        if(!ptr.ar[index])
        {
            return 0;
        }
        ptr=ptr.ar[index];
    }
    return ptr!=NULL;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s1,y;
        cin.ignore();
        getline(cin,s1);
        vector <string>v1;
        trie root=initialize();
       istringstream iss(s);
        while(iss>>y)
        {   c++;
            v1.push_back(y);
        }
        if(strcmp(v1[0],"push")==0)
        {
            insert(root,v1[1]);
        }
        else
        {
            search(root,v1[1]);
        }
    }
    //code
    return 0;
}
