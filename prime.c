#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("enter the no to be cheked=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    printf("yes it is a prime no \n");
    else
    printf("no it's not a prime no \n ");
    for(i=1;i<=n;i++)
    { 
        if(n%i==0)
        printf("%d \n",i);
    }
    return 0;
}
