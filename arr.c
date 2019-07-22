#include<stdio.h>
int main()
{

    int N[50],n,K,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&N[i]);
    }
    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
        sum=sum+N[i];
    }
    printf("%d",sum);
}
