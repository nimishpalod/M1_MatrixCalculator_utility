#include <stdio.h>
#include <stdlib.h>

void addition()
{
    int n, m, i, j, c, d;
    printf("Enter number of rows = \n");
    scanf("%d", &n);
    printf("Enter number of columns = \n");
    scanf("%d", &m);
    printf("Enter Values for Matrix 1\n");
    int a[n][m], b[n][m], sum[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Values for Matrix 2\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d][%d]\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of entered matrices = \n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
        {
            sum[c][d] = a[c][d] + b[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
}

void subtraction()
{
    int n, m, i, j, c, d;
    printf("Enter number of rows = \n");
    scanf("%d", &n);
    printf("Enter number of columns = \n");
    scanf("%d", &m);
    printf("Enter Values for Matrix 1\n");
    int a[n][m], b[n][m], sum[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d][%d]\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Values for Matrix 2\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d][%d]\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Sum of entered matrices = \n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
        {
            sum[c][d] = a[c][d] - b[c][d];
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
}

void multiplication()
{
    int m, n, i, j, k, r, s;
    printf("Enter the rows and column of first matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the rows and column of second matrix\n");
    scanf("%d%d", &r, &s);
    int a[m][n], b[r][s], c[25][25];
    if (m != r)
        printf("\n The matrix cannot multiplied");
    else
    {
        printf("\n Enter the elements of first matrix ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("\t%d", &a[i][j]);
        }
        printf("\n Enetr the elements of second matrix ");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
                scanf("\t%d", &b[i][j]);
        }
        printf("\n The element of first matrix is");
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
                printf("\t%d", a[i][j]);
        }
        printf("\n The element of second matrix is");
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
                printf("\t%d", b[i][j]);
        }
        for (i = 0; i < m; i++)
        {
            printf("\n");
            for (j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < m; k++)
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    printf("\n Multiplication of two matrix is = \n");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", c[i][j]);
    }
}

void transpose()
{
    int m, n, c, d;
    printf("Enter the number of rows and columns of a matrix\n");
    scanf("%d%d", &m, &n);
    int matrix[m][n], transpose[m][n];
    printf("Enter elements of the matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &matrix[c][d]);

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            transpose[d][c] = matrix[c][d];

    printf("Transpose of the matrix:\n");

    for (c = 0; c < n; c++)
    {
        for (d = 0; d < m; d++)
            printf("%d\t", transpose[c][d]);
        printf("\n");
    }
}

void determinant()
{
    int i, j, k, n;
    printf("Enter Order of Matrix: ");
    scanf("%d", &n);
    float a[n][n], x[n], ratio, det = 1;

    printf("\nEnter Coefficients of Matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i][i] == 0.0)
        {
            printf("Mathematical Error!");
            exit(0);
        }
        for (j = i + 1; j < n; j++)
        {
            ratio = a[j][i] / a[i][i];

            for (k = 0; k < n; k++)
            {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    printf("\nUpper Triangular Matrix: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%0.2f\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++)
    {
        det = det * a[i][i];
    }

    printf("\n\nDeterminant of given matrix is: %0.3f", det);
}

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