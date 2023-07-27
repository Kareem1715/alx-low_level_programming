#include "main.h"

/**
 * infinite_add - Entery point.
 *
 * @n1: string parameter.
 * @n2: string parameter.
 * @r: string parameter.
 * @size_r: integar parameter.
 *
 * Description: print numbers.
 *
 * Return: string poniter (r).
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1len = 0, n2len = 0, len, n1digit, n2digit, carry = 0;

	while (n1[n1len] != '\0')
		n1len++;
	while (n2[n2len] != '\0')
		n2len++;

	if (n1len > n2len) /* Get the maximum length in string */
		len = n1len;
	else
		len = n2len;

	r[len] = '\0'; /* Make the last index in r[] is '\0' */

	if (len + 1 > size_r)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (--n1len >= 0) /* Check the last index not '\0' so we add -- at first */
			n1digit = n1[n1len] - '0'; /* Get the integar number from string by - '0' */
		else
			n1digit = 0; /* If n1len < 0 make digit = zero has no effect on summation */
		if (--n2len >= 0)
			n2digit = n2[n2len] - '0';
		else
			n2digit = 0;				/* Summation of n1 and n2 */
		r[i] = (n1digit + n2digit + carry) % 10 + '0'; /* And convert r[] to string*/
		carry = (n1digit + n2digit + carry) / 10; /* Get the carry of addation */
	}
	if (carry == 1) /* Add the last carry to the first index in r[] */
	{				/* By shifting the all r[i] one forward index and add carry */
		r[len + 1] = '\0';
		if (len + 2 > size_r)
			return (0);
		for (; len >= 0; len--) /* Shifting the r[] one index to right */
			r[len + 1] = r[len];
		r[0] = carry + '0'; /* Adding the carry to first index */
	}
	return (r);
}
