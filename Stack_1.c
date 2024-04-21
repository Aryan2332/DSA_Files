//STACK IMPLEMENTATION USING ARRAY



#include<stdio.h>
#include<stdbool.h>
int n;
int top=-1;
bool OverFlow()
{
    if(top>n)
    return true;
    else
    return false;

}
bool UnderFlow()
{
    if(top==-1)
    return true;
    else 
    return false;
}
int pop()
{
    // if(UnderFlow())
    // {
    //     printf("\nSTACK UNDERFLOW CONDITION MEET !!!!!!!!!!!!");
    //     return 0;
    // }
    top=top-1;
    return 0;
}
int push()
{
    // if(OverFlow())
    // {
    //     printf("STACK OVERFLOW !!!!!!!!!!");
    //     return 0;
    // }
    int x;
    printf("\nENTER THE VALUES TO PUSH :");
    scanf("%d",&x);
    return x;
    
}
void peek(int *ax)
{
    printf("\nVALUE AT TOP = %d ",ax[top]);
}
int main()
{
    printf("\nENTER THE SIZE OF STACK :");
    scanf("%d",&n);
    n=n-2;
    int ar[n];
    for(int i=0;i<1;)
    {
        int ch;
        printf("\nENTER THE CHOICE :\n1.PUSH\n2.POP\n3.SEEK\n ANY OTHER TO EXIT :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            if(OverFlow())
            {
               printf("STACK OVERFLOW !!!!!!!!!!");
               continue;
            }
            top=top+1;
            ar[top]=push();
            printf("VALUE PUSHED");
            break;
            case 2:
            if(UnderFlow())
            {
                printf("\nSTACK UNDERFLOW CONDITION MEET !!!!!!!!!!!!");
                continue;
            }
            pop();
            break;
            case 3:
            peek(ar);
            break;
            default :
            printf("\n EXECUTION COMPLETE !!!!!!!!!!!!!");
            i=i+1;
        }
    }
}
