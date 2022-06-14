#include <stdio.h>
#include <conio.h>
int main(){
    // clrscr();
    int n,bt[20],wt[20],tat[20],avwt =0,avtat=0,i,j;
    printf("Enter the total number of processes(maximum 20):\n");
    scanf("%d",&n);
    printf("\n enter process Brust time\n");
    for (i = 0; i < n; i++)
    {
        printf("P[%d]: ",i+1);
        scanf("%d",&bt[i]);
    }
    wt[0]=0;
    for ( i = 1; i < n; i++)

    {
        wt[i]=0;
        for ( j = 0; j < i; j++)
        {
            wt[i]+=bt[j];
        }
        
    }
    printf("\n process\tBrust Time\t waiting Time\t Turn around time");
    for (  i = 0; i < n; i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\n P[%d]\t\t %d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    avwt/=i;
    avtat/=i;
    printf("\n\nAverage waiting Time: %d ",avwt);
    printf("\n\nAverage Turn around Time: %d ",avtat);
    
    getch();
    return 0;
}