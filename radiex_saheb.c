void Radiexsort(int a[],int n)
{
    int bucket[10][5], buck[10],b[10];
    int i,j,k,l,num,div,large,pass;
    div=1;
    num=0;
    large=a[0];
    for(i=0;i<n;i++){
        if(a[i]>i)
        large=a[i];
    }
    while(large>0){
        large=large/10;
        num++;
    }
}