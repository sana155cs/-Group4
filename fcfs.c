<<<<<<< HEAD
#include<stdio.h>
int main()
{
            int queue[20],n,head,i,j,k,seek=0,max,diff;
            float avg;
            printf("Enter the max range of disk\n");
            scanf("%d",&max);
            printf("Enter the size of queue request\n");
            scanf("%d",&n);
            printf("Enter the queue of disk positions to be read\n");
            for(i=1;i<=n;i++)
            scanf("%d",&queue[i]);
            printf("Enter the initial head position\n");
            scanf("%d",&head);
            queue[0]=head;
            for(j=0;j<=n-1;j++)
            {
                        diff=abs(queue[j+1]-queue[j]);
                        seek+=diff;
                        printf("Disk head moves from %d to %d with seek %d\n",queue[j],queue[j+1],diff);
            }
            printf("Total seek time is %d\n",seek);
            avg=seek/(float)n;
            printf("Average seek time is %f\n",avg);
            return 0;
=======
#include <stdio.h>
int main()
{
    int pid[15];
    int bt[15];
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
 
    printf("Enter process id of all the processes: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&pid[i]);
    }
 
    printf("Enter burst time of all the processes: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
 
    int i, wt[n];
    wt[0]=0;
 
    //for calculating waiting time of each process
    for(i=1; i<n; i++)
    {
        wt[i]= bt[i-1]+ wt[i-1];
    }
 printf("Process ID     Burst Time     Waiting Time     TurnAround Time\n");
    float twt=0.0;
    float tat= 0.0;
    for(i=0; i<n; i++)
    {
        printf("%d\t\t", pid[i]);
        printf("%d\t\t", bt[i]);
        printf("%d\t\t", wt[i]);
 
        //calculating and printing turnaround time of each process
        printf("%d\t\t", bt[i]+wt[i]);
        printf("\n");
 
        //for calculating total waiting time
        twt += wt[i];
 
        //for calculating total turnaround time
        tat += (wt[i]+bt[i]);
    }
    float att,awt;
 
    //for calculating average waiting time
    awt = twt/n;
 
    //for calculating average turnaround time
    att = tat/n;
    printf("Avg. waiting time= %f\n",awt);
    printf("Avg. turnaround time= %f",att);
}
>>>>>>> 9e82f27f7f109e4b28dc3160dc8f60765c57b246
