#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define SIZE 100

char stack[SIZE];
int top=-1;
int n;

push(char a)
{
 stack[++top]=a;
}
pop()
{
    printf("Entered");
    stack[top--]=0;

}



int main()
{   int i=0;
char ch,infix[50],postfix[50];
    printf("Enter the infix ");
    scanf("%s",&stack);

    while(ch=stack[i++]!='\0')
    {

    }
return 0;
}
