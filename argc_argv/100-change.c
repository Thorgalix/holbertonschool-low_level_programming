#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int centimes, piece = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	centimes = atoi(argv[1]);
	if (centimes < 0)
	{
		printf("0\n");
		return (0);
	}
		for (; centimes >= 25; piece++)
			centimes -= 25;
		for (; centimes >= 10; piece++)
			centimes -= 10;
		for (; centimes >= 5; piece++)
			centimes -= 5;
		for (; centimes >= 2; piece++)
			centimes -= 2;
		for (; centimes >= 1; piece++)
			centimes -= 1;
		printf("%d\n", piece);
		return (0);
}
