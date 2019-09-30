#include <stdlib.h>
#include <stdio.h>
/*Standard include statements*/

int main(int argc, char** argv)
{
	FILE* f = fopen(argv[1],"r");
	int i, j, k, numRow1, numColumn1, numRow2, numColumn2;
	int** matrix1;
	int** matrix2;
	int** matrixProduct;


	if(f != NULL)
	{
		fscanf(f, "%d %d", &numRow1, &numColumn1);//read first line for rows and columns
		matrix1 = (int **)malloc(numRow1 * sizeof(int *));//allocate memory for # of rows
		for(i = 0; i < numRow1; i++)//loop to allocate memory for # of columns and also add data
		{			
			matrix1[i] = (int *)malloc(numColumn1 * sizeof(int));
			for(j = 0; j < numColumn1; j++)
			{
				fscanf(f,"%d", &matrix1[i][j]);
			}			
		}
		fscanf(f, "%d %d", &numRow2, &numColumn2);//read number of rows and columns for matrix 2
		if(numColumn1 != numRow2)//check if matrix will be possible
		{
			printf("bad-matrices\n");
			fclose(f);
			free(matrix1);
			exit(0);
		}
		else
		{
			matrix2 = (int **)malloc(numRow2 * sizeof(int *));//allocate memory for matrix 2 rows
			matrixProduct = (int **)malloc(numRow1 * sizeof(int *));//allocate memory for matrix product rows
			for(i = 0; i < numRow2; i++)//loop to allocate memory for # of columns and also add data
			{			
				matrix2[i] = (int *)malloc(numColumn2 * sizeof(int));
				for(j = 0; j < numColumn2; j++)
				{
					fscanf(f,"%d", &matrix2[i][j]);
				}				
			}
			for(i = 0; i < numRow1; i++)
			{
				matrixProduct[i] = (int *)malloc(numColumn2 * sizeof(int));
				for(j = 0; j < numColumn2; j++)
				{
					matrixProduct[i][j]=0;
					for(k = 0; k < numColumn1; k++)
						matrixProduct[i][j] = matrixProduct[i][j] + matrix1[i][k] * matrix2[k][j];
				}
			}
			for(i = 0; i < numRow1; i++)
			{
				for(j = 0; j < numColumn2; j++)
				{
					printf("%d\t", matrixProduct[i][j]);
				}
				printf("\n");
			}
			free(matrix1);
			free(matrix2);
			free(matrixProduct);
		}		
	}
	else
	{
		printf("Could not open file.\n");
        return 1;
	}
}