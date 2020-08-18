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
  if((root->key>x) &&(root->key<z))
  {
    sum+=root->key;
  }

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
   int t,h;
   cin>>t;
    while(t--)
    {
        char s[1000];
        int y;
        int c=0,i=0;
        cin.ignore();
        vector <int> a;
        scanf("%[^\n]s",s);
        //cout<<s;
        int x,z;
        cin>>x>>z;
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
                    if(d!=0)
                    a.push_back(d);
                    //cout<<d<<" ";
                    j=0;
                 }
                 else
                 {
                     j++;
                 }
             }
        /*for(int i=0;i<a.size();i++)
        {
            cout<<a[i]<<"\t";
        }*/
        //cout<<"\n";

        node* root=NULL;
        for(int i=0;i<a.size();i++)
        {
            insert_tree(&root,a[i]);
        }
        int sum=find_range_sum(root,x,z);
        cout<<sum<<"\n";
    }
return 0;
}
