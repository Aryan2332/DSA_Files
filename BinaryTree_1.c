//BINARY TREE BASIC IMPLEMENTATION WITH TREE INSERTION FEATURE


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* rht;
    struct node* lft;
};

void PostTrvrsl(struct node* root)
{
    if(root!=NULL)
    {
        PostTrvrsl(root->lft);
        PostTrvrsl(root->rht);
        printf("%d ",root->data);
    }
}

void InOrdrTrvrsl(struct node* root)
{
    if(root!=NULL)
    {
        InOrdrTrvrsl(root->lft);
        printf("%d ",root->data);
        InOrdrTrvrsl(root->rht);
    }
}

void PreTrvrsl(struct node* root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        PreTrvrsl(root->lft);
        PreTrvrsl(root->rht);
    }
}

struct node* fnd1;

void PreSrch(struct node* rt,struct node* hd)
{
    if(rt!=NULL)
    {
        if((rt->lft==hd)||(rt->rht==hd))
        {
         fnd1=rt;
        }
        PreSrch(rt->lft,hd);
        PreSrch(rt->rht,hd);
    }
}
struct node* CrtNd()
{
    int x;
    printf("\nENTER THE DATA OF NODE : ");
    scanf("%d",&x);
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->lft=NULL;
    temp->rht=NULL;
    return temp;
}

int main()
{
    struct node* temp1;
    struct node* head;
    struct node* root;
    root=CrtNd();
    head=root;
    for(int i=0;i<1;)
    {   
        int xo;
        int ch;
        printf("\nENTER THE CHOICE :\n1.CRETE NODE ON LEFT\n2.CREATE NODE ON RIGHT\n3.TRAVERSAL\n4.CHANGE LEVEL UPWARD IN TREE\n");
        printf("5.MOVE DOWNWARD IN TREE\n6.KNOW CURRENT LEVEL\n7.DELETE CURRENT NODE \n ANY OTHER TO EXIT :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            temp1=CrtNd();
            head->lft=temp1;
            head=temp1;
            break;
            case 2:
            //  printf("\nENTER THE DATA OF NODE : ");
            //  scanf("%d",x);
            temp1=CrtNd();
            head->rht=temp1;
            head=temp1;
            break;
            case 3:
              printf("\nPREORDER TRAVERSAL : ");
              PreTrvrsl(root);
              printf("\nPOST TRAVERSAL : ");
              PostTrvrsl(root);
              printf("\nINORDER TRAVERSAL : ");
              InOrdrTrvrsl(root);
            break;
            case 4:
            PreSrch(root,head);
            head=fnd1;
            break;
            case 5:
            printf("\nENTER 0 - TO MOVE IN LEFT |||| 1 - TO MOVE IN RIGHT :");
            scanf("%d",&xo);
            if(xo==1)
            {
                if(head->rht!=NULL)
                head=head->rht;
                else
                printf("NO NODE PRESENT !!!!!!");
            }
            else if(xo==0)
            {
                if(head->lft!=NULL)
                head=head->lft;
                else
                printf("NO NODE PRESENT !!!!!!");
            }
            else
            printf("WRONG INPUT !!!!!!");
            break;
            case 6:
            printf("\nCURRENT LEVEL HAS DATA ENTRY OF : %d ",head->data);
            break;
            case 7:
            if(head->lft==NULL && head->rht==NULL)
            {
            PreSrch(root,head);
            free(head);
            head=fnd1;
            }
            else
            printf("CURRENT NODE IS NOT A LEAF NODE ,HENCE CANNOT BE REMOVED !!!!!!!\n");
            break;
            default :
            i=i+1;
            printf("\nEXECUTION COMPLETE !!!!");
        }
    }
    system("pause");
    return 0;
}
