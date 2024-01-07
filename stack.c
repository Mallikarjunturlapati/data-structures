#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push();
void pop();
int isFull();
int isEmpty();
void Display();
int isFull()
{
    if(top==MAX-1)
    {
        return 1;
    }
    return 0;
}
int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }
    return 0;
}
void push(int n)
{
    if(isFull())
    {
        printf("STACK FULL\n");
    }
    else
    {
        top++;
        stack[top]=n;
        printf("ELEMENT INSERTED\n");
    }
}
void pop()
{
    if(isEmpty())
    {
        printf("STACK IS EMPTY\n");
    }
    else
    {
        top--;
        stack[MAX]=top;
        printf("ELEMENT POPPED\n");
    }
}
void Display()
{
    if (isEmpty())
    {
        printf("STACK EMPTY\n");
    }
    else
    {
        printf("STACK ELEMENTS:\n");
        for(int i=0;i<=top;i++)
        {
            printf("%d",stack[i]);
            printf("\n");
        }
     

    }
}
void main()
{
    
    while(1)
    {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.IS EMPTY\n5.IS FULL\n6.Exit\n");
        int ch;
        printf("choose one operation:\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            int v;
            printf("ENTER ELEMENT:\n");
            scanf("%d",&v);
            push(v);
            break;
        case 2:
            pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            if(isEmpty())
            {
                printf("STaCK EMPTY\n");

            }
            else
            {
                printf("YOU HAVE SPACE..\n");
            }
            break;
        case 5:
            if(isFull())
            {
                printf("stack full\n");

            }
            else
            {
                printf("you have space..\n");
            }
            break;
        case 6:
            return 0;
        
        default:
            printf("ENTER CORRECT NUMBER..\n");
            break;
        }
    }
    return 0;

}