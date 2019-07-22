#include<stdio.h>
int main()
{
    int n,m,power=1,i;
    printf("enter the no=");
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
    power=power*n;
    }
    printf("power is=%d",power);
    return 0;
    
}
