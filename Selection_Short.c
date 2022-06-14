#include <stdio.h>
#include <conio.h>

void Selection_Short( int A[],int size){
    int loc,temp,min;
    for (int  i = 0; i < size; i++)
    {
        min=A[i];
        loc =i;
        for (int j =i+1; j < size; j++)
        {
            if (A[j]<min)
            {
                min=A[j];
                loc =j;
            }
            
        }
        if(loc!=i){
            temp=A[i];
            A[i]=A[loc];
            A[loc]=temp;
        }
        
    }
    
}


int main(){
    int A[]={56,12,34,89,55};
    int size =5;
     
    
    
    Selection_Short(A,size);

     printf("Array Before Shorting\n");
     for (int i = 0; i < size; i++)
    {
        printf(" %d",A[i]);
    }
    return 0;
}