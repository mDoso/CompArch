#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*Standard include statements*/

int main(int argc, char** argv)
{
	int i;
	int c;
	int length;
	char* word;
	for(i = 1; i < argc; i++)//iterate through each string via command line
	{
		word = argv[i];
		length = strlen(word);
		for(c = 0; c < length; c++)
		{
			if(word[c] == 'a' || word[c] == 'e' || word[c] == 'i' || word[c] == 'o' || word[c] == 'u' || word[c] == 'A' || word[c] == 'E' || word[c] == 'I' || word[c] == 'O' || word[c] == 'U')
			{
				printf("%c", word[c]);
			}
		}
	}
	//printf("\n");
}
/*
Take in strings as user input, strip all characters and whitespace except vowels
if vowel, add to array
*/