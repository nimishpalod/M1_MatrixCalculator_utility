#include<stdio.h>

int main()
{
    int input;
    printf("Welcome to the world of matrix\n");
    printf("Select the operation\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Transpose\n5. Determinant\n");
    scanf("%d",&input);
    switch(input)
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            transpose();
            break;
        case 5:
            determinant();
            break;
    }

}