#include <stdio.h>
#include<conio.h>
void Radix_sort(int *a,int size){
    int bucket[10][5],buck[10];
    int i,j,k,l,num,div,large,pass;
    div=1;
    num=0;
    large =a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i]>large)
        {
           large =a[i];
        }
    }
        while (large>0)
        {
           large=large/10;
           num++;
        }
        
    
    for (int pass = 0; pass<num; pass++)
    {
       for ( k = 0; k < 10; k++)
       {
        buck[k]=0;
       }
       for ( i = 0; i < size; i++)
       {
            l=(a[i]/div)%10;
            bucket[l][buck[l]++]=a[i];
       }
       
       
    
    i=0;
    for (k = 0; k< 10; k++)
    {
        
      for ( j = 0; j < buck[k]; j++)
      {
          a[i++]=bucket[k][j];
     }
     
    }
     div=div*10;
      
    
    
    } 
    
}
void display(int a[],int size){
    for (int i = 0; i < size; i++)
    {
      printf("%d ",a[i]);
    }
    printf("\n");
    
}
int main(){
    
    int a[]={35,20,15,22,44,99,88};

    int size =7;
    display(a,size);
    Radix_sort(a,size);
    display(a,size);
    return 0;
}