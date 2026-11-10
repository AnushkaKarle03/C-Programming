#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values of a and b:");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("sum is:%d\n",sum);
    int difference=a-b;
    printf("difference is :%d",difference);
    return 0;
}