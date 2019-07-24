#include<stdio.h>
int main()
{
    int N,i,mul=0;
    printf("enter the no=");
    scanf("%d",&N);
    for(i=0;i<5;i++)
    {
        mul=mul+N;
        printf("%d ",mul);
    }
}
