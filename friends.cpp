#include<bits/stdc++.h>
using namespace std;
struct linkedlist
{
    int data;
    linkedlist* next;
    int id;
};
void  add_in_linkedlist(linkedlist** head , int data,int id)
{
        linkedlist* temp,*p;
        temp=(linkedlist*) malloc(sizeof(linkedlist));
        temp->data=data;
        temp->id=id;
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

int find_min(linkedlist* head)
{
    linkedlist* p=head;
    int min;
    min=p->data;
    while(p!=NULL)
    {
        if(min>=p->data)
        {
            min=p->data;
        }
        p=p->next;
    }
    return min;
}
void  deletekey(int a , linkedlist **head)
 {
     linkedlist* p,*q;
     p=*head;
     q=p->next;
     if(a==(p->data))
    {
     p->next=NULL;
     *head=q;
   free(p);
    }
   else
   {
    while(q!=NULL)
     { if(p->data==a)
        {break;}
       p=p->next;
       q=q->next;
     }
    if(q==NULL)
    {  if(p->data!=a)
       {return -1;
        }
     else
     {
      p->next=NULL;
      free(q);}
    }

   else
    {
       p->next=q->next;
       q->next=NULL;
       free(q);
    }

  }

}
void print(linkedlist* head)
{
    linkedlist* p=head;
    while(p!=NULL)
    {
        cout<<p->id<<"\t"<<p->data;
    }

}

int main()
{
    linkedlist* head=NULL;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,l,x,id,m;
        for(i=0;i<n;i++)
        {
            cin>>id>>x;
            add_in_linkedlist(&head,x,id);
        }
       while(k--)
        {
         m=find_min(head);
        deletekey(m,&head);
        }
        print(head);
        cout<<"\n";
    }
return 0;
}
