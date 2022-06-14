#include <stdio.h>
#include<conio.h>

    int Binary_Search(int A[],int,int);//function pototype

void main(){
    int n,i,key,A[20];
    printf("how many elements: \n");
    scanf("%d",&n);
    printf("enter the elements in assending order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
       }
    printf("enter the element you search\n");
    scanf("%d",&key);
    int T=Binary_Search(A,n,key);
    if(T==-1){
        printf("not found\n");
    }else{
     printf("item found at %d:\n",T+1);
    }
   getch();
}



int Binary_Search(int A[],int n,int key){
    int low,high,mid;
    low=0;
    high =n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(key==A[mid])
            return mid;
        if(key<A[mid])
            high =mid-1;
        else
            low =mid+1;
        
    }
    return -1;
}

 

    
