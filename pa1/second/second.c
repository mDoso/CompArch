#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
}Node;

/*void push(Node** head, int* data)
{

}*/
int main(int argc, char** argv)
{
	FILE* f = fopen(argv[1],"r");
	//Node* head = NULL;
	char action, lines, type;
	char line[256];
	int c = 1, val;
	Node* nodelist

	if(f != NULL)
	{
		for(lines = getc(f); c != EOF; c = getc(f))
		{
			if (lines == '\n')
			{	
				c++;
			}
		}
	}
	else
	{
		printf("Could not open file.\n");
		fclose(f);
        return 1;
	}
	fclose(f);
	/*f = fopen(argv[1], "r");
	c = 0;
	fscanf(f,"%c %d", &action, &val);
	while(fgets(line, sizeof(line),f))
	{
		if(action =='i')
		{
			if(c == 0)
			{
				head->data = val;
				head->next = NULL;
			}
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
	else
	{
		printf("Could not open file.\n");
        return 1;
	}
	

/*Read line, check first character, if i, create node add 
data of second character,else if d, find Node containing 
character follwing d, delete Node*/
}