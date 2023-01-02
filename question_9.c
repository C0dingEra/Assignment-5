#include<stdio.h>
int main()
{
    int i,n,x;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {

     x=i*i*i;
     printf("%d * %d = %d\n",i,i,x);
    }
    return 0;
}
