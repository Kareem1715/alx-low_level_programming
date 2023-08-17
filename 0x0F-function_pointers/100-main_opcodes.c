#include "3-calc.h"

int main(int argc, char* argv[])
{
    int numByte;
    char *ptrmain = (char *)main;
    char *tmp;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    numByte = atoi(argv[1]); /* convert the passed number to integar */
    if (numByte < 0) /* if number of bytes negative */
    {
        printf("Error\n");
        exit(2);
    }
    for (; numByte > 0; numByte--)
    {
        if (numByte)
            tmp = " ";
        else
            tmp = "\n";
        printf("%02hhx%s", *ptrmain, tmp);
        ptrmain++;
    }
    return (0);
}
