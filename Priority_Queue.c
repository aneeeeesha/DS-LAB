

#include <stdio.h>
#define size 5
int a[size];
int f=-1,r=-1;

int isEmpty()
{
    if(f==-1 && r==-1)
     return 1;
    else 
     return 0;
}
int isFull()
{
    if(r==size-1)
        {
            
            return 1;
        }
    else
     return 0;
}
void Dequeue()
{
    if(isEmpty())
        printf("The Queue is empty");
    else 
        {printf("EMTEFF");
        f++;
        if(r==f)
            {r=f=-1;
            printf("The queue is empty");}
        }
}
void Enqueue(int m)
{
    if(isEmpty())
        {   printf("Entereddddd");
            f=r=0;
            a[r]=m;
        }
    else if(isFull())
        printf("The queue is full");
    else 
        a[++r]=m;
        
}
void sort()
{

    int t,i;
    for(i=f;i<r;i++)
        for(int j=i+1;j<=r;j++)
            {
                if(a[i]>a[j])
                    {
                        t=a[j];
                        a[j]=a[i];
                        a[i]=t; 
                    }
                    
            }
 
}


int main()
{   int i,n;
    printf("Enter one of the options: \n");
   
    
    while(1)
    
    {   printf("1.Enqueue 2. Dequeue 3.Display 4.Terminate\n");
        printf("\nOption : ");
        scanf("%d",&i);
        switch(i){
            case 1:printf("You have chosen to Enqueue");
                 
                    scanf("%d",&n);
                    Enqueue(n);
                    break;
            case 2:printf("You have chosen to Dequeue");
                     Dequeue();
                    break;
            case 3:printf("Displaying...");
                    sort();
                    for(int i=f;i<=r;i++)
                     printf("%d ",a[i]);
                    break;
            case 4:printf("Terminating");
                    exit(0);
        }
    }
    
    
}
