#include <stdio.h>
int partition(int a[],int p,int r);

void Quicksort(int a[],int p,int r){
        int q;
        if(p<r){
            q=partition(a,p,r);
            Quicksort(a,p,q); //sorting left side of the array
            Quicksort(a,q+1,r);//sorting right side of the array
        }
}
int partition(int a[],int p,int r){
    int x,i,j,temp;
    x=a[p];
    i=p-1;
    j=r+1;
    while (1)
    {
        do
        {
            j=j-1;
        } while (a[j]>x);// last number[j]>first number[x]
        do
        {
           i=i+1;
        } while (a[i]<x);//first number[x]<first number[x+1]>
        if(i<j){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }else
        return j;
    }
    

}
void display(int a[],int n ){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
}
int main(){
    int n;
    printf("Enter the no of element\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the number\n");
    for (int i = 0; i < n; i++)
    {
           scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    display(a,n);
    Quicksort(a,0,n-1);
    printf("After sorting\n");
    display(a,n);


    return 0;
}