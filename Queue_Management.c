#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#define size 5

int arr[size];
int a;
int r=-1,f=-1;
bool IsFull()
{ 
    if(size==r-1)
        return true;
    else
        return false;
}
bool IsEmpty()
{
    if(r=-1 && f==-1)
        return true;
    else
        return false;
}
void InQueue()
{
    if(IsFull())
        printf("The queue is full");
    else if(IsEmpty())
        f=0;
            
 arr[++r]=a;
    printf("Suceesfully entered,%d \n",r);

            
}
void DeQueue()
{
    if(IsEmpty())
        {printf("The Queue is empty");
        f=r=-1;}
    else 
        f++;
}
int main()
{   int c;
while(1)
    {printf("\nEnter one of the below options:\n");
    printf("1.Press 1 for adding something to the queue\n");
    printf("2.Press 2 for dequeueing\n");
    printf("3.Press 3 for displayin the queue\n");
    printf("4.Press 4 for terminating the program\n");

    
    scanf("%d",&c);
    if(c==1)
        {printf("Enter the number that you want to enter : ");
        scanf("%d",&a);
        InQueue();
        }
    else if(c==2)
        {
            printf("DeQueued");
            DeQueue();
        }
    else if(c==3)
        {
          while(f!=r)
          {   
              printf("%d",arr[f]);
              f++;
          }
        }
    else if(c==4)
        break;
    else
        printf("Enter the correct option\n\n");
    }
    
    return 0;
}
