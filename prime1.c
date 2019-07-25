#include<stdio.h>
int main()
{
    int i,count=0,n;
    printf("enter the no=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime no",n);
    }
    else
    {
        printf("%d is not a prime no because the no is divisable by\n",n);
        for(i=1;i<=n;i++)
    {
       if(n%i==0)
        printf("%d\n",i);
    }
    
}
}
