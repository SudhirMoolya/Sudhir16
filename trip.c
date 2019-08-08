
#include <stdio.h>
int main()
{
int n,i;
double s[100], sum=0,avg,t=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%lf",&s[i]);
}

for(i=0;i<n;i++)
{
    sum=sum+s[i];
  
}
  avg=sum/n;

  for(i=0;i<n;i++)
  {
  if(s[i]<avg)
    {
        t=t+avg-s[i];
        
    }
  }  
printf("%lf",t);

}
