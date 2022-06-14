#include <stdio.h>
#include<conio.h>



void getElement(int *arr,int size){
    for(int i=0;i<size;i++){
        printf("Enter the numbers at index[%d]= ",i+1);
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
}

int indinsertion(int arr[],int size,int element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for (int i = size-1; i >= index; i--)
    {
       arr[i+1]=arr[i];
    }
    arr[index]=element;
    return 1;
    
}
int main(){
    int arr[100];
    int size;
    int capacity =100;
    int index ;
    int element ;
    printf("How many element you should Entered\n");
    scanf("%d",&size);
    getElement(arr,size);
    display(arr,size);

    printf("Whatever you want\n");
    scanf("%d",&element);
    printf("Enter the index \n");
    scanf("%d",&index);
    int I =indinsertion(arr,size,element,capacity,index);
    if(I==-1){
        printf("Insertion failed\n");
    }else{
        size+=1;
        printf("insertion successful\n");
        display(arr,size);
    }
    return 0;
}