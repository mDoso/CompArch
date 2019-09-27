#include <stdlib.h>
#include <stdio.h>
/*Standard include statements*/
int main(int argc, char** argv)
{
	FILE* f = fopen(argv[1],"r");
	int row1, column1, row2, column2, i;
	char* line = "hi";
	if(f != NULL)
	{
		fscanf(f, "%d %d", &row1, &column1);
		printf("%d %d\n", row1, column1);
		for(i = 1; i < row1; i++)
		{
			fscanf(f,"%[^\n]", line);
		}
		fscanf(f, "%d %d", &row2, &column2);
		printf("%d %d\n", row2, column2);
	}
	else
	{
		printf("Could not open file.\n");
        return 1;
	}

	fclose(f);
}