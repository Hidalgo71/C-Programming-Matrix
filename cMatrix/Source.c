#include <stdio.h>
#include<math.h>;
int main()
{
	int matrixA [3] [2] = { 1,0,1,1,1,0 };
	int matrixB [2] [3] = { 1,0,1,0,1,1 };
	int matrixF [2] [3];
		int i = 0, j = 0;
	int matrixS [3] [3];
		int a = 0, b = 0;

	printf("Matrix A AND Matrix B\n");

		if (matrixA [0][0] && matrixB [0][0] ==1)		//FINAL MATRIX [0][0]
	{
		matrixF[0][0] = 1;
	}
	else
	{
		matrixF[0][0] = 0;
	}

		if (matrixA[0][1] && matrixB[0][1] == 1)		//FINAL MATRIX [0][1]
	{
		matrixF[0][1] = 1;
	}
	else
	{
		matrixF[0][1] = 0;
	}

		if (matrixA [1][0] && matrixB [0][2] ==1)		//FINAL MATRIX [0][2]
	{
		matrixF[0][2] = 1;
	}
	else
	{
		matrixF[0][2] = 0;
	}

		if (matrixA [1][1] && matrixB [1][0] ==1)		//FINAL MATRIX [1][0]
	{
		matrixF[1][0] = 1;
	}
	else
	{
		matrixF[1][0] = 0;
	}

		if (matrixA [2][0] && matrixB [1][1] ==1)		//FINAL MATRIX [1][1]
	{
		matrixF[1][1] = 1;
	}
	else
	{
		matrixF[1][1] = 0;
	}

		if (matrixA [2][1] && matrixB [1][2] ==1)		//FINAL MATRIX [1][2]
	{
		matrixF[1][2] = 1;
	}
	else
	{
		matrixF[1][2] = 0;
	}

		for (i = 0; i < 2; i++)							//To Write For Every MatrixF Column and Row 
		{
			for (j = 0; j < 3; j++)
			{
				printf(" %d", matrixF[i][j]);
			}
			printf("\n");
		}

				//QUESTION B TAKE SQUARE OF MATRIX

	printf("Enter The Matrix Values:(3x3)\n");
	

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3; b ++)
		{
			scanf("%d", &matrixS[a][b]);
			matrixS[a][b] = matrixS[a][b];
		}
		printf("\n");
	}

	for (a= 0; a < 3; a++)
	{
		for (b = 0; b < 3; b ++)
		{
			printf(" %d", matrixS[a][b] * matrixS[a][b]);
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}