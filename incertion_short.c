#include <stdio.h>
#include<conio.h>

void insertion_Short(int A[],int size){
    int i,key;
    for (int j = 1; j < size; j++)
    {
        key=A[j];
        i=j-1;
        while (i>-1 & A[i]>key)
        {
           A[i+1]=A[i];
           i=i-1;
        }
        A[i+1]=key;
        
    }
    
}
int main(){
     int A[]={56,12,34,89,55,67,99,122,78};
    int size =sizeof(A)/sizeof(int);
    
    insertion_Short(A,size);

     printf("Array Before Shorting\n");
     for (int i = 0; i < size; i++)
    {
        printf(" %d",A[i]);
    }
    return 0;
}