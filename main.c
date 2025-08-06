#include <stdio.h>

int main(void)
{
	int matrix1[10][10] = { 0 };
	int matrix2[10][10] = { 0 };
	int matrix3[10][10] = { 0 };

	printf("Welcome! This is Matrix Multiplication program written in C by Suleyman Kara.\n\n");

	printf("Warning! >> Number of rows and columns must be smaller or equal to 10.\n");
	int row_num1 = 0;
	printf("Enter number of rows for first matrix >> ");
	scanf("%d", &row_num1);

	int column_num1 = 0;
	printf("Enter number of columns for first matrix >> ");
	scanf("%d", &column_num1);

	int row_num2 = 0;
	printf("Enter number of rows for second matrix >> ");
	scanf("%d", &row_num2);

	int column_num2 = 0;
	printf("Enter number of columns for second matrix >> ");
	scanf("%d", &column_num2);

	if (row_num1 > 10 || column_num1 > 10 || row_num2 > 10 || column_num2 > 10) {
		printf("Error: Max size is 10.\n");
		return 1;
	}

	if (row_num1 < 1 || column_num1 < 1 || row_num2 < 1 || column_num2 < 1) {
		printf("Error: Matrix dimensions must be at least 1.\n");
		return 1;
	}

	if (column_num1 != row_num2) {
		printf("Error: Matrix multiplication not possible.\n");
		return 1;
	}
	
	printf("\nPlease enter the details:\n");

	// Details of first matrix
	for (int i = 0; i < row_num1; i++)
	{
		for (int j = 0; j < column_num1; j++)
		{
			printf("First Matrix [%d][%d] >> ", i+1, j+1);
			scanf("%d", &matrix1[i][j]);
		}
	}
	puts("");

	// Details of second matrix
	for (int i = 0; i < row_num2; i++)
	{
		for (int j = 0; j < column_num2; j++)
		{
			printf("Second Matrix [%d][%d] >> ", i+1, j+1);
			scanf("%d", &matrix2[i][j]);
		}
	}

	int row_num3 = row_num1;
	int column_num3 = column_num2;

	// Matrix multiplication
	for (int i = 0; i < row_num3; i++)
	{
		for (int j = 0; j < column_num3; j++)
		{
			for (int k = 0; k < column_num1; k++)
			{
				matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	printf("\nResult Matrix:\n");
	for (int i = 0; i < row_num3; i++)
	{
		for (int j = 0; j < column_num3; j++)
		{
			printf("%6d", matrix3[i][j]);
		}
		printf("\n");
	}
}