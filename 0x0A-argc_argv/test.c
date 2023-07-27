#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s ", argv[i][j]);
		}
		printf("\n");
	}

	return (0);
}
