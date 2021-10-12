#include<stdio.h>
#define size 10

int arr[size];
int top=-1;

void insert(int a)
{
 arr[++top]=a;
}
void pop(){
    top-=1;
}

void display(){
    for(int i=top;i>-1;i--)
     printf("%d ",arr[i]);
}


void main(){

int c,a;
int flag=1;


while(flag==1){
printf("Enter one of the options below \n");
printf("Choose 1 for inserting an element into the stack \n");
printf("Choose 2 for popping the top most element off the stack \n");
printf("Choose 3 for displaying the elements in the stack \n");

scanf("%d",&c);

switch(c){
    case 1:printf("Enter the element that you want to add: ");
           scanf("%d",&a);
           insert(a);
        //   for(int i=0;i<10;i++)
        //     printf("%d ",arr[i]);
           break;
    case 2:pop();
        break;
    case 3:display();
        flag=2;
        break;
}
}
}
