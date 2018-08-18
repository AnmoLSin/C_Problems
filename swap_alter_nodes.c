#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node* next;
} node;
int main()
{
    int data,n,i,n1;
    node* head=NULL;
    printf("Enter no. of elements : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter %d element : ",i);
        scanf("%d",&data);
        node* new_node=(node *)malloc(sizeof(node));
        new_node->data=data;
        new_node->next=head;
        head=new_node;
        node* cur=head;
        while(cur!=NULL)
        {
        printf("%d ",cur->data);
        cur=cur->next;
        }
        printf("\n");
    }
    printf("Enter no. of alternate nodes: ");
    scanf("%d",&n1);
    node *cur=head;
    node* next1=NULL;
    node* next12=NULL;
    while(cur!=NULL)
    {
        next1=cur;
        next12=cur->next;
        int temp=next1->data;
        next1->data=next12->data;
        next12->data=temp;
        cur=next12;
        if(cur->next==NULL)
            break;
        for(i=0;i<=n1;i++)
            cur=cur->next;
    }

    node* cur1=head;
    while(cur1!=NULL)
    {
        printf("%d ",cur1->data);
        cur1=cur1->next;
    }
}
