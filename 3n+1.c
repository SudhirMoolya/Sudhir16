#include<stdio.h>
int main()
{
    int n,a,b,count1=1, count2 = 1;
    scanf("%d %d",&a,&b);
    if(a > b){
        int temp = a;
        a = b;
        b = temp;
    }
    for(int i=a;i<=b;i++)
    {
        n = i;
    while(n!=1)
    {
        if(n%2==0)
        {
            n=n/2;
            count1++;
        }
        else
        {
            n=n*3+1;
            count1++;
        }
    }
    if(count1 > count2) count2 = count1;
    
    count1 = 1;
}
printf("%d %d %d\n", a, b, count2);
}
