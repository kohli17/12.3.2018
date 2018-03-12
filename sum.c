#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,sum=0;
    printf("Enter number:\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
