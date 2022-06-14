#include <stdio.h>


void display(int *arr,int n){
    for (int i = 0; i <n; i++)
    {
        printf("%d ", arr[i]);
    }
   printf("\n"); 

}
void bubbleShort(int* arr,int n){
    int temp;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
        if(arr[j]>arr[j+1])
        {
            temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;

        }
        }
        
    } 

}
int main(){
    int n;

    int arr[10];
    printf("Enter the length of the Array\n");
    scanf("%d",&n);

    printf("Enter the number\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    display(arr,n);

    bubbleShort(arr,n);

    display(arr,n);
    return 0;
}