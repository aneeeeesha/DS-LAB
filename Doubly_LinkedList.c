/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
struct node{
    struct node* prev;
    int data;
    struct node* next;
};

struct node* head=NULL;

void insertLeft(int a){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
        {
            head=ptr;
            ptr->prev=NULL;
            ptr->data=a;
            ptr->next=NULL;
            
        }
    else 
       { head->prev=ptr;
        ptr->next=head;
        ptr->data=a;
        ptr->prev=NULL;
        head=ptr;
       }
       
       
}

void display(){
    struct node* temp=head;
    do{
        if(head==NULL)
            printf("The list is empty");
        else
            {
                printf("%d ",temp->data);
                temp=temp->next;
            }
    }
    while(temp!=NULL);
    printf("\n");
}

void delete(int a){
       struct node* temp=head;
       int dat;
       dat=temp->data;
       
    while(dat!=a){
        if(head==NULL)
            printf("The list is empty");
        else if(temp==NULL)
          { printf("\nNOT FOUND");
            break;}
        else
            {
                temp=temp->next;
                dat=temp->data;
                
            }
    }
temp->prev->next=temp->next;
    free(temp);
    
    
}

int main()
{   printf("Enter one of the options\n1.Insert at the left of the node \n2.Delete at specific position \n3.Display\n4.Exit\n");
    int c=1,a;
    while(c!=4)
{    scanf("%d",&c);
    switch(c){
        case 1:printf("Enter the data: ");
                scanf("%d",&a);
                insertLeft(a);
                break;
        case 2:printf("Enter the value to be deleted: ");
                scanf("%d",&a);
                delete(a);
                break;
        case 3:display();
                break;
        case 4:break;
    }
  
}
    return 0;
}
