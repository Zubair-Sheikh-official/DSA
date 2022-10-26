#include<stdio.h>
#include<stdlib.h>
#define N 2
int top = -1, s[]; // N = size of stack that is s[2]={1,2}
int main()
{
    int option;
    while(1)
    {
        printf("1. Push \n");
        printf("2. Pop \n");
        printf("3. show \n");
        printf("4. exit \n");
        printf("\n Taken Option: ");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong option taken");
        }
    }
}
void push()
{
    int x;
    if(top==N-1)
        {
            printf("Overflow");
        }
    else
        {
            printf("Enter Element to insert in stack:");
            scanf("%d",&x);
            top++;
            s[top]=x;
        }
}
void pop()
{
    if(top==-1)
        {
            printf("Underflow");
        }
    else
        {
            printf("popped element: %d \n",s[top]);
            top--;
        }
}
void show()
{
    if(top==-1)
        {
            printf("Underflow");
        }
    else
        {
            printf("Element present in stack are: \n");
            for(int i=top;i>=0;--i)
            {
            printf("%d\n",s[i]);
            }
        }
}
