#include <stdlib.h>
#include <stdio.h>
/*Standard include statements*/

/*Function to check if numbers are even using mod*/
int isEven(int num)
{
	if(num%2==0)
		return 1;
	else
		return 0;
}

/*Function to swap values for sorting*/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;	
}

/*Funtion to Selection Sort in ascending order*/
void selectSortMin(int arr[], int size)
{
	int i;
	int i2;
	for(i = 0; i < size - 1; i++)
	{
		int min = i;
		for(i2 = i + 1; i2 < size; i2++)
		{
			if(arr[i2] < arr[min])
				min = i2;
		}
		swap(&arr[min], &arr[i]);
	}
}

/*Funtion to sort in descending order*/
void sortMax(int arr[],int size)
{
	int i;
	int i2;
	for(i = 0; i < size; i++)
	{
		for(i2 = i + 1; i2 < size; i2++)
		{
			if(arr[i] < arr[i2])
				swap(&arr[i],&arr[i2]);
		}
	}
}


int main(int argc, char** argv)
{
	
	int x;//Standard variable declarations, ints arrays, filename etc.
    int numEven, numNums, i;
    int arrFinal[20];
    int arrEven[20];
    int arrOdd[20];
    int evenC = 0;
    int oddC = 0;
    FILE* f = fopen(argv[1],"r");//opens file in read mode 
	if (f == NULL) { //if unable to open file, display error
        printf("Could not open file.\n");
        return 0;
    }    
    fscanf(f,"%d",&numNums);//takes first line of file, to determine how many numbers will be worked with
    //printf("%d\n", numNums);
    while (fscanf(f, "%d", &x) == 1) {//for every number in the file, determines if even or odd, counts number of each
    	numEven = isEven(x);
		if(numEven)
		{
			arrEven[evenC] = x;
			evenC++;
			//printf("%d\n", evenC);
		}
		else
		{
			arrOdd[oddC] = x;
			oddC++;
			//printf("%d\n", oddC);
		}
    }
    fclose(f); //close file
    selectSortMin(arrEven, evenC);//sort evens in ascending order
    sortMax(arrOdd,oddC);//sort odds in descending order
    int place = 0;
    for(i = 0; i < evenC; i++) //two loops to merge the sorted arrays for even and odd
    {
    	arrFinal[i] = arrEven[i];
    	place++;
    	//printf("%d\n", place);
    }
    for(i = 0; i < oddC; i++)
    {
    	
    	arrFinal[place + i] = arrOdd[i];
    	//printf("%d\n", arrFinal[i]);
    }
    //printf("%d\n",x);
    for(i = 0; i < numNums; i++){
    	printf("%d\t", arrFinal[i]);
    }
}