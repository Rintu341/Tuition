#include<stdio.h>
#include<stdlib.h>
struct link {
    int info;
    struct link *next;
    
};

void  create_list(struct link *);
void display(struct link * );
int main(){
    struct link* node=(struct link*)malloc(sizeof(struct link));
    if(node==NULL){
        printf()
    }

    return 0;
}

