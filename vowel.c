#include<stdio.h>
int main()
{
char n,i;
scanf("%c",&n);
for(i=65;i<=97;i++)
{
if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
printf("Vowel");
else if(n!=i)
printf("Consonant");
else
printf("invalide");
return 0;
}
}
