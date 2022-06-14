#include <stdio.h>
#include <stdlib.h>
struct link{     
    int info;
    struct link *next;
};
void createlist(struct link *);
void display(struct link *);
void insertAtBeg(struct link * );
struct link *start=NULL;
int main(){
    struct link*node=(struct link*)malloc(sizeof(struct link));
    if(node==NULL){
        printf("Out of memory space");
        exit(0);
    }
    while(1){
    int ch;
    printf("Enter 1 for create ,2 for display,3 for insertATbeg, 4 for exit \n ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        createlist(node);
        break;
    case 2:
        display(node);
        break;
    case 3:
        insertAtBeg(node);
        break;
    case 4:
        exit(0);
        break;

    default:
        printf("Input worng!\n");
        
        break;
    }

    }

    
    return 0;
}
void createlist(struct link*node){
    char ch;
    int i=1;
    printf("enter the value of %d  node\n",i);
    scanf("%d",&node->info);
    node->next=NULL;
    i++;
    printf("press n to quide and anyother key to continue\n");
    fflush(stdin);
    ch=getchar();
    while(ch!='n'){
        node->next=(struct link*)malloc(sizeof(struct link));
        if(node->next==NULL){
            printf("out of memory space");
            exit (0);

        }
        node=node->next;
       printf("enter the value of %d node\n",i);
       scanf("%d",&node->info);
       node->next=NULL;
       i++;
       printf("press n to quit and any other key to continue\n");
       fflush(stdin);
       ch=getchar();
    }
}
void display(struct link*node){
    printf("values of linked list\n ");
    while(node!=NULL){
        printf("%d\t",node->info);
        node=node->next;
    }
}
void insertAtBeg(struct link *node ){
    struct link *curr;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("Enter the value of new node");
    scanf("%d",&curr->info);
    
    if(curr==NULL){
        printf("out of memory space\n");
        exit(0);
    }
    curr->next=node;
    printf("input the current value\n");
    start =curr;
}


