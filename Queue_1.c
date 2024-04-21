//IMPLEMENTING QUEUES USING ARRAY



#include<stdio.h>
#include<stdbool.h>
int n;
int top=-1;
int enqueue()
{
    int x;
    printf("\nENTER THE VALUE TO ENTER IN QUEUE : ");
    scanf("%d",&x);
    return x;
}
bool isEmpty()
{
    if(top==-1)
    return true;
    else 
    return false;
}
bool isFull()
{
    if(top==n)
    return true;
    else
    return false;
}
void peek(int *ax)
{
    printf("\nVALUE AT TOP = %d ",ax[top]);
}
int main()
{
    printf("\nENTER THE NO. OF QUEUE : ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<1;)
    {
        int ch;
        printf("\nENTER THE CHOICE :\n1.ENQUEUE\n2.DEQUEUE\n3.SEEK\n ANY OTHER TO EXIT :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            if(isFull())
            {
                printf("\nQUEUE FULL !!!!!!!!!!!");
                continue;
            }
            top=top+1;
            ar[top]=enqueue();
            printf("\nVALUE ADDED TO QUEUE ");
            break;
            case 2:
            if(isEmpty())
            {
                printf("\nQUEUE EMPTY !!!!!!!!!!!");
                continue;
            }
            printf("\nELEMENT REMOVED ::");
            if(top==0)
            {
                top=-1;
                continue;
            }
            for(int i=0;i<=(top-1);i++)
            {
               ar[i]=ar[i+1];
            }
            top=top-1;

            break;
            case 3:
            peek(ar);
            break;
            default :
            printf("\n EXECUTION COMPLETE !!!!!!!!!!!!!");
            i=i+1;
        }
    }
    return 0;
}
