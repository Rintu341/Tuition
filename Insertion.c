#include <stdio.h>
#include<conio.h>
    //traversal
     void display(int  arr[],int size){
    for (int i = 0; i <size; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    
    }
    //insertion
    int indinsertion(int arr[],int size,int element,int capacity,int index){
        if(size>=capacity){
            return -1;
        }
        for (int i= size-1; i >=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;        

        
    }
    int main(){

    

     int I =indinsertion(arr,size,element,capacity,index);
     if(I==-1){
         printf("insertion failed\n");
     }else{
            size+=1;
         printf("insertion successful\n");

         display(arr,size);
     }
    return 0;
    }