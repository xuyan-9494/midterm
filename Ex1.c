#include <stdio.h>
#define MAX_LEN 51
int main()
{
	char input[MAX_LEN];
	printf("Please input a string, the max length is 50: ");
	int c = getchar();
	int index = 0;
	while (c != '\n' && c != EOF)
	{
		input[index] = c;
		index++;
		if (index >= MAX_LEN - 1)
		{
			printf("The input length is over %d\n", MAX_LEN - 1);
			return 0;
		}
		c = getchar();
	}
	input[index] = '\0';
	int word_count = 0;
	for (int i = 0; i < MAX_LEN - 1; i++)
	{
		if (input[i] == '\0')
		{
			break;
		}
		if (input[i] == ' ' )
		{
			word_count++;
		}
	}
	printf("The number of words is : %d \n", word_count);
	return 0;
}
