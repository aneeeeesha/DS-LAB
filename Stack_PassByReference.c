#include<stdio.h>
#define size 10

void insert(int a,int arr[],int *top)
{
 arr[++(*top)]=a;
}
void pop(int *top){
    *top-=1;
}

void display(int arr[],int *top){
    for(int i=*top;i>-1;i--)
     printf("%d ",arr[i]);
}


void main(){

int *arr[size];
int top=-1;
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
           insert(a,arr,&top);
        //   for(int i=0;i<10;i++)
        //     printf("%d ",arr[i]);
           break;
    case 2:pop(&top);
        break;
    case 3:display(arr,&top);
        flag=2;
        break;
}
}
}
