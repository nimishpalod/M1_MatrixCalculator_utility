#include<stdio.h>

int add(int a,int b)
{
    return a+b;
}
int main()
{
    /* code */
    int num1,num2;
    printf("Please Enter a number\n");
    scanf("%d",&num1);
    printf("Please enter another number\n");
    scanf("%d",&num2);
    printf("%d",add(num1,num2));
    return 0;
}

