#include <stdlib.h>
#include <stdio.h>
/*Standard include statements*/
int main(int argc, char** argv)
{
	FILE* f = fopen(argv[1],"r");
	int i, rowMat1, columnMat1, rowMat2, columnMat2;
	char line[1000];
	int** matrix1;
	if(f != NULL)
	{
		fscanf(f, "%d %d", &rowMat1, &columnMat1);
		//printf("%d %d\n", rowMat1, columnMat1);
		matrix1 = (int **)malloc(rowMat1 * sizeof(int *));
		for(i = 0; i < rowMat1; i++)
		{
			fgets(line, sizeof(line), f);
			fscanf(f, "%d %d\n", &rowMat2, &columnMat2);
			printf("%d %d\n", rowMat2, columnMat2);
			matrix1[i] = (int *)malloc(columnMat1 * sizeof(int));
		}
		fscanf(f, "%d %d\n", &rowMat2, &columnMat2);
		printf("%d %d\n", rowMat2, columnMat2);
	}
	else
	{
		printf("Could not open file.\n");
        return 1;
	}

	fclose(f);
}