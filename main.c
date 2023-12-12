#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};
/**
 * main - monty code
 * @argc: arguments
 * @argv: file location
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *cont;
	FILE *f;
	size_t s = 0;
	size_t line = 1;
	stact_t stck = NULL;
	unsigned int c = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1] "t");
	bus.file = f;
	if (!f)
	{
		fprintf(stderr, "Error: Cant open file %s\n", argv[1]);
		exit(EXIT FAILURE);
	}
	while (line > 0)
	{
		cont = NULL;
		line = getline(&cont, &s, f);
		bus.cont = cont;
		c++;
		if (line > 0)
		{
			execute(cont, &stck, c, f);
		}
		free(cont);
	}
	free_stack(stck);
	fclose(f);
	return (0);
}
