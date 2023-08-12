#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int lengthOfString(char *s);
int isDigit(char *s);

/**
 * main - Entery point
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Description: This function multiplie two number
 *
 * Return: Always(0) success.
 */
int main(int argc, char *argv[])
{
	int i, j, length1, length2, length, num1, num2;
	char *mul;

	if (argc != 3 || isDigit(argv[1]) == 0 || isDigit(argv[2] == 0))
	{
		printf("Error\n");
		exit(98);
	}

	length1 = lengthOfString(argv[1]);
	length2 = lengthOfString(argv[2]);

	length = length1 + length2;
	mul = calloc((length + 1), sizeof(int));
	if (mul == NULL)
	{
		printf("Error\n");
		exit(98);
	}


			

	for (i = length1 - 1; i >= 0; i--) 	  
	{									   /* 12345 */
		for (j = length2 - 1; j >= 0; j++) /* 67891 */
		{
			num1 = argv[1][i] - '0';
			num2 = argv[2][j] - '0';



			mul[i + j] += num1 * num2;
			mul[i + j - 1] += mul[i + j] / 10;
			mul[i + j] = mul[i + j] % 10; 
		}
	}
	i = 0;
	while (i < length && mul[i] == 0)
		i++;

	if (i == length)
		printf('0');
	
	for (; i < length; i++)
		printf("%d", mul[i] + '0');
		
	printf("\n");
	free(mul);

	return (0);

}

int lengthOfString(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	
	return (len);
}

int isDigit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	
	return (1);
}
