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
    int i, n1len, n2len, len, n1digit, n2digit, carry;

    n1len = 0;
    while (n1[n1len] != '\0')
    n1len++;

    n2len = 0;
    while (n2[n2len] != '\0')
    n2len++;

    if (n1len > n2len)
        len = n1len;
    else
        len = n2len;

    if (len + 1 > size_r)
        return (0);
    r[len] = '\0';

    carry = 0;
    for (i = len - 1; i >= 0; i--)
    {
        n1len--;
        n2len--;
        if (n1len >= 0)
            n1digit = n1[n1len] - '0';
        else
            n1digit = 0;
        
        if (n2len >= 0)
            n2digit = n2[n2len] - '0';
        else
            n2digit = 0;

        r[i] = (n1digit + n2digit + carry) % 10 + '0';
        carry = (n1digit + n2digit + carry) / 10;
    }

    if (carry == 1)
    {
        r[len + 1] = '\0';
        if (len + 2 > size_r)
            return (0);
        while (len >= 0)
        {
            r[len + 1] = r[len];
            len--;
        }
        r[0] = carry + '0';
    }
       

    return (r);
}
