#include<stdio.h>
int main()
{
    int a,b,c,d,e,average;
    printf("enter marks a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    average=(a+b+c+d+e)/5;
    printf("average=%d",average);
    if(average>=90&&average<=100)
    {
        printf("Grade A");
    }
    else
    if(average>=80&&average<=70)
    {
        printf("Grade B");
    }
    else
   if(average>=70&&average<=60)
   {
       printf("Grade C");
   }
      else
      if (average>=60&&average<=50)
      {
          printf("Grade D");
      }
      else
      if(average>=50&&average<=60)
      {
          printf("Grade E");
      }
      else
      if(average<50)
      {
          printf("Fail");
      }
      }
     
