#include<stdio.h>
int main()
{
    int N,count=0;
    printf("enter the number=");
    scanf("%d",&N);
    while(N!=0)
{
    N=N/10;
    count++;
}
    printf("%d",count);
    return 0;
}
