#include<bits/stdc++.h>
using namespace std;

typedef struct node
{
        int key;
        struct node* left;
        struct node* right;
}node;
void  insert_tree(node** root,int key)
{
        node* temp,*p,*q;
        temp=(node*) malloc(sizeof(node));
        temp->key=key;
        temp->left=NULL;
        temp->right=NULL;
        if(*root==NULL)
        {
                *root=temp;
                return ;
        }
        p=*root;
        q=NULL;
        while(p!=NULL)
        { if(p->key<key)
                {
                        q=p;
                        p=p->right;
                }
                else if(p->key>key)
                {
                        q=p;
                        p=p->left;
                }
        }
        if(q->key>key)
        { q->left=temp;
        }
        else if(q->key<key)
        {
                q->right=temp;
        }
}
int search1(node* root,int key,int sum,int z);
int search2(node* root,int key,int sum,int x);
int find_range_sum(node* root,int x,int z)
{
  int sum;
  sum+=search1(root,x,sum,z);
  sum+=search2(root,z,sum,x);
return sum;
}
int search1(node* root,int key,int sum,int z)
{
if(root==NULL || root->key== key)
        {
          return root->key;
        }
else if(key < root->key)
        {
            if((root->key>key) &&(root->key<z)){
            search1(root->left,key,sum+root->key,z);}
         else
            {
             search1(root->left,key,sum,z);
            }

        }
else
        if((root->key>key) &&(root->key<z))
        {
        search1(root->right,key,sum+root->key,z);
        }
        else
        {
            search1(root->right,key,sum,z);
        }
}
int search2(node* root,int key,int sum,int x)
{
if(root==NULL || root->key== key)
        {
          return root->key;
        }
else if(key < root->key)
        {
            if((root->key<key) &&(root->key>x)){
            search2(root->left,key,sum+root->key,x);}
         else
            {
             search2(root->left,key,sum,x);
            }

        }
else
        if((root->key<key) &&(root->key>x))
        {
        search2(root->right,key,sum+root->key,x);
        }
        else
        {
            search2(root->right,key,sum,x);
        }
}

int main()
{
   int t,x,h;
    string p;
    getline(cin,p);
    istringstream iss(p);
    iss>>t;
    while(t--)
    {
        string s;
        int y;
        int c=0,i=0;
        vector <int> a;
        cin.ignore();
        getline(cin,s);
        istringstream iss(s);
        while(iss>>y)
        {   c++;
            a.push_back(y);
        }
        int x,z;
        cin>>x>>z;
        node* root=NULL;
        for(int i=0;i<c;i++)
        {
            insert_tree(&root,a[i]);
        }
        int sum=find_range_sum(root,x,z);
        cout<<sum;
    }

}
