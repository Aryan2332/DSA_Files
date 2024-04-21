//BASIC LINKED LIST WORKING PROGRAM


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Node
{
    int data;
    struct Node *next;
};

int apnd()
{
    int x;
    printf("\nENTER THE DATA FOR NEW NODE : ");
    scanf("%d",&x);
    return x;

}

void seek(struct Node *ptr)
{
    int i=1;
    while(ptr!=NULL)
    {
        printf("%d. %d -> ",i,ptr->data);
        i=i+1;
        ptr=ptr->next;
    }
}


bool UnderFlow(struct Node *hd,struct Node *crnt)
{
    if(hd==crnt)
    {
        printf("\nUNDERFLOW CONDITION MET !!!!");
        return true;
    }
    else 
    return false;
}
int main()
{
    struct Node *head;
    struct Node *emnt;
    struct Node *temp;
    struct Node *tem2;
    int fst=1;
    for(int j=0;j<1;)
    {
        int ch;
        printf("\nENTER THE CHOICE :\n1.INSERT\n2.DELETE\n3.SEEK\n ANY OTHER TO EXIT :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            if(fst==1)
            {
                head=(struct Node*)malloc(sizeof(struct Node));
                int y=apnd();
                head->data=y;
                head->next=NULL;
                fst=fst+1;
            }
            else if(fst==2)
            {
                temp=(struct Node*)malloc(sizeof(struct Node));
                head->next=temp;
                int y=apnd();
                temp->data=y;
                temp->next=NULL;
                fst=fst+1;
            }
            else
            {
                emnt=(struct Node*)malloc(sizeof(struct Node));
                temp->next=emnt;
                int y=apnd();
                emnt->data=y;
                emnt->next=NULL;
                temp=emnt;
            }
            break;
            case 2:
            if(UnderFlow(head,temp))
            continue;
            tem2=(struct Node*)malloc(sizeof(struct Node));
            tem2=head;
            for(int i=0;i<1;)
            {
                if(tem2->next!=NULL)
                {
                    temp=tem2;
                    tem2=tem2->next;
                    continue;
                }
                else
                {
                    free(tem2);
                    temp->next=NULL;
                    printf("NODE DELETED !!!!!!!!!!");
                    i=i+1;
                }
            }
            break;
            case 3:
            seek(head);
            break;
            default :
            printf("\n EXECUTION COMPLETE !!!!!!!!!!!!!");
            j=j+1;
        }
    }

    return 0;
}




