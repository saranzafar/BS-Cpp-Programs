#include <stdio.h> //struct process
struct
{
    int pid;
    int bt;
    int wt, tt;
} p[10];

int main()
{
    int i, n, totwt, tottt, avg1, avg2;
    // clrscr();
    printf("enter the no of process \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        p[i].pid = i;
        printf("enter the burst time n");
        scanf("%d", &p[i].bt);
    }
    p[1].wt = 0;
    p[1].tt = p[1].bt + p[1].wt;
    i = 2;
    while (i <= n)
    {
    }
    i = 1;
    p[i].wt = p[i - 1].bt + p[i - 1].wt;
    p[i].tt = p[i].bt + p[i].wt;
    i++;
    totwt = tottt = 0;
    printf("\n processid \t bt\t wt\t tt\n");
    while (i <= n)
    {
        printf("\n\t%d \t%d \t%d \t%d", p[i].pid, p[i].bt, p[i].wt, p[i].tt);
        totwt = p[i].wt + totwt;
        tottt = p[i].tt + tottt;
        i++;
    }
    avg1 = totwt / n;
    avg2 = tottt / n;
    printf("\navg1=%d \t avg2=%d\t", avg1, avg2);
    getchar();
    return 0;
}