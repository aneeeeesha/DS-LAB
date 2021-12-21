/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}
;
struct node* head =NULL;


void dlthead(){
    if(head==NULL)
        printf("The list is empty");
    else
        head=head->next;
}
void dltrear(){
    
    if(head==NULL)
        printf("The list is empty");
    else
       {    struct node* temp=head;
       struct node* prev;
           while(temp->next!=NULL)
            {
              struct node* prev=temp;
              temp=temp->next;
            }
       
           prev->next=NULL;
       }   
}
void insertAThead(int x)
{   struct node* new_node=(struct node*)malloc(sizeof(struct node));
    
    if(head==NULL)
        head=new_node;
    else
    
   { 
       new_node->data=x;
    new_node->next=head;
    head=  new_node;}
}
void insertrear(int x)
{
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    
    struct node* temp=head;
    while(temp->next!=NULL)
        {
            temp->next=new_node;
            new_node->data=x;
            new_node->next=NULL;
        }
}
void insertATrear(int x)
{       struct node* new_node=(struct node*)malloc(sizeof(struct node));
    new_node=(struct node*) malloc(sizeof(struct node));
    struct node* temp=head;
    new_node->data=x;
    new_node->next=NULL;
    if(head==NULL)
    {
        head=new_node;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
    
    
}

void display()
{
    struct node* temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    
}
int main()
{
    insertATrear(1);
    insertATrear(2);
    insertATrear(3);
    dltrear();
    dlthead();
    insertAThead(4);
    insertAThead(5);
    insertAThead(6);
    display();
    return 0;
}
