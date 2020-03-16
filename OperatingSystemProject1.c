#include<stdio.h>
#include<conio.h>
int n;
struct Process
{
 int p_no;
 
 int Arrival_t,Burst_t,ct,Wait_t,Taround_time,p;

 int flag;
 }
 p_list[100];
 void Sorting()
 {
  struct Process p;
  int i,j;
  for(i=0;i<n-1;i++)
  {
   for(j=i+1;j<n;j++)
    {
     if(p_list[i].Arrival_t > p_list[j].Arrival_t)
      {
         p = p_list[i];
          p_list[i] = p_list[j];
          p_list[j] = p;
       }
    }
  }
 }
 int main()
 {
  int i,t=0,b_t=0,peak;
  int a[10];
  float Wait_time = 0, Taround_time = 0, Avg_w_t=0, Avg_taround_time=0;
  printf("enter the no. of processes: ");
   scanf("%d",&n);

   for(i = 0; i < n; i++)
    {
      p_list[i].p_no = i+1;

      printf("\nEnter Details For P%d process:-\n", p_list[i].p_no);
      printf("Enter Arrival Time: ");
      scanf("%d", &p_list[i].Arrival_t );
      printf("Enter Burst Time: ");
      scanf("%d", &p_list[i].Burst_t);
      p_list[i].flag = 0;
      b_t = b_t + p_list[i].Burst_t;
    }
  Sorting();
    for(i=0;i<n;i++)
     {
      a[i]=p_list[i] Burst_t;
      }
    p_list[9].Burst_time = 9999;
     for(t = p_list[0].Arrival_time; t <= b_t+1;)
      {
        peak = 9;
        for(i=0;i<n;i++)
         {
           if(p_list[i].Arrival_t <= t & p_list[i].Burst_t < p_list[peak].Burst_t & p_list[i].flag != 1)
            {
               peak = i;
            }
           if(p_list[peak].Burst_t==0 & p_list[i].flag != 1)
            {
              p_list[i].flag = 1;
              p_list[peak].ct=t;p_list[peak].Burst_t=9999;
              printf("P%d completes in %d\n",p_list[i].p_no,p_list[peak].ct);
            }
         }
    t++;
    (p_list[peak]Burst_t)--;
   }
   for(i=0;i<n;i++)
    {
      p_list[i].Taround_time=(p_list[i].ct)-(p_list[i].Arrival_t);
      Avg_taround_time=Avg_taround_time+p_list[i].Taround_time;
      p_list[i].Wait_t=((p_list[i].Taround_time)-a[i]);
      Avg_w_t=Avg_w_t+p_list[i].Wait_t;
     }
      printf("PNO\tAT\tCT\tTA\tWTt\n");
      for(i=0;i<n;i++)
      {
        printf("P%d\t%d\t%d\t%d\t%d\n",p_list[i].p_no,p_list[i].Arrival_t,p_list[i].ct,p_list[i].Taround_time
        ,p_list[i].Wait_t);
       }
        printf("Average Turn around Time: %f\t\n\n",Avg_taround_time\n);
        printf("Average Waiting Time :\t %f\t\n",Avg_w_t/n);
     }
