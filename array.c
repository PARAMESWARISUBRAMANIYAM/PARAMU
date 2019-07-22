#include<stdio.h>
int main()
{

    int arr[50],n,m,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
