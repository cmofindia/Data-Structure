#include<stdio.h>
#include<stdlib.h>

typedef struct linked_list
{
    int data;
    struct linked_list *next;
}NODE;

NODE *create()
{
    NODE *newnode,*list,*root;
    int num;
    list=NULL;
    root=NULL;
    printf("\nEnter a number [0 to STOP]:");
    scanf("%d",&num);
    while(num!=0)
    {
        newnode=(NODE *)malloc(sizeof(NODE));
        newnode->data=num;
        newnode->next=NULL;
        if(root==NULL)
        {
            root=newnode;
        }
        else 
            list->next=newnode;

        list=newnode;
        printf("\nEnter a number [0 to STOP]:");
        scanf("%d",&num);
    }
    return root;
}

void display(NODE *list)
{
    if(list)
    {
        while(list)
        {
            printf("%5d",list->data);
            list=list->next;
        }
    }
    else 
    {
        printf("\nList is empty");
    }
}
int main()
{
    printf("\nCreating Linked list\n");
    NODE *first=create();
    printf("\nCreated Linked list\n");
    display(first);
    return 0;
}