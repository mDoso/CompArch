#include <stdio.h>
#include <stdlib.h>

/*typedef struct Node
{
	int data;
	struct Node* next;
};

void push(Node** head, int* data)
{

}*/
int main(int argc, char** argv)
{
	FILE* f = fopen(argv[1],"r");
	//Node* head = NULL;
	char action;
	char line[256];
	int c = 0;
	int val;
	int sortArr[10];//Add elements inserted into array, then sort elements, need to malloc array for size, use sort from first, binary search for delete?
	if (f != NULL)
	{
		fscanf(f,"%c %d", &action, &val);
		while(fgets(line, sizeof(line),f))
		{
			if(action=='i')
			{
				printf("%c\t", action);
				printf("%d\n", val);
				c++;
			}
			else if(action == 'd')
			{			
				printf("%c\t", action);
				printf("%d\n", val);
			}
			fscanf(f,"%c %d", &action, &val);		
		}
	}
	

/*Read line, check first character, if i, create node add 
data of second character,else if d, find Node containing 
character follwing d, delete Node*/
	fclose(f);
}