#include<bits/stdc++.h>
using namespace std;
typedef struct linkedlist{
int data;
linkedlist *next;
} linkedlist;
void  add_in_linkedlist(linkedlist** head , int data)
{
        linkedlist* temp,*p;
        temp=(linkedlist*) malloc(sizeof(linkedlist));
        temp->data=data;
        p=*head;
         if(*head==NULL)
        {
        *head =temp;
         }
     else
       {
       while(p->next!=NULL)
       {
        p=p->next;
       }
       p->next=temp;
        /*temp->next=*head;
        *head=temp;*/
      }
return;
}
int GetNode(linkedlist *head,int k)
{
    linkedlist *p,*m;
    p=m=head;
    int c=0;
    while(m!=NULL)
    {
        m=m->next;
        c++;
    }
    int x=c-k-1;
    while(x--)
    {
        p=p->next;
    }
    return p->data;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x,o;
        cin>>n;
        linkedlist *head= NULL;
        while(n--)
        {
            cin>>x;
            add_in_linkedlist(&head,x);
        }
        cin>>k;
        o=GetNode(head,k);
        cout<<o<<"\n";
    }
    return 0;

}
