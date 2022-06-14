#include <stdio.h>
void insertionsort(int A[],int n){
    int i, j, key ;
    for(j=1;j<n;j++){
        key=A[j];
        i=j-1;
        while(i>-1 & A[i]>key){
         A[i+1]=A[i];
         i=(i-1);   
        }
        A[i+1]=key;
    }
}
int main(){    
    
    return 0;
}