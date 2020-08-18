#include<bits/stdc++.h>
using namespace std;
typedef struct linkedlist
{
    int data;
    int id;
    linkedlist* next;

}linkedlist;
void  add_in_linkedlist(linkedlist** head , int data, int id)
{
        linkedlist* temp,*p;
        temp=(linkedlist*) malloc(sizeof(linkedlist));
        temp->data=data;
        temp->id=id;
        temp->next=NULL;
       // temp->next=NULL;
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
        if(min>p->data)
        {
            min=p->data;
        }
        p=p->next;
    }
    return min;
}

void deleteKey(linkedlist **head_ref, int key)
{

    linkedlist* temp = *head_ref, *prev;

        if(temp->data==key){
                *head_ref = temp->next;   // Changed head
            free(temp);               // free old head
            return;}// Change Temp


          while (temp != NULL && temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }


        if (temp == NULL) return;

        prev->next = temp->next;

        free(temp);

       // temp = prev->next;

}
void print(linkedlist* head)
{
    linkedlist* p;
    p=head;
    if(p==NULL)
    {
        cout<<"0 0 \n";
        return;
    }
    while(p!=NULL)
    {
        cout<<p->id<<" "<<p->data<<"\n";
        p=p->next;
    }


}

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,l,x,id,m;
        linkedlist* head=NULL;
        cin>>n;
        //cout<<"\n";
        cin>>k;

        for(i=0;i<n;i++)
        {
            cin>>id>>x;
            add_in_linkedlist(&head,x,id);
        }
       for(j=0;j<k;j++)
        {
         m=find_min(head);
         //cout<<m<<"\n";
        deleteKey(&head,m);
        }
        print(head);

    }
return 0;
}

