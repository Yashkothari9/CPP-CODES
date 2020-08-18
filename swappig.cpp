#include<bits/stdc++.h>
using namespace std;
typedef struct linkedlist
{
    int data;
    linkedlist* next;

}linkedlist;
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
      return ;
}
void swapping(linkedlist** head,int n)
{
    linkedlist* p,*q;
    int temp;
    p=*head;
    q=p->next;
    int k=n-4;
    p=p->next;
    p=p->next;
    q=q->next;
    q=q->next;
    while(k)
    {
       temp=q->data;
       q->data=p->data;
        p->data=temp;
        q=q->next;
        p=p->next;
        q=q->next;
        p=p->next;
        k=k-2;
    }


}
void print(linkedlist* head)
{
    linkedlist* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<"\t";
        p=p->next;
    }

}
int main()
{
   int t;
   cin>>t;
   while(t--)
    {
        int n,m,x,k;
        linkedlist* head=NULL;
        cin>>n;
        m=n;
        while(m--)
        {
            cin>>x;
            add_in_linkedlist(&head,x);
        }
        if(n<=4)
        {
            print(head);
        }
        else
        {
         swapping(&head,n);
         print(head);
        }

        cout<<"\n";

    }
    return 0;
}
