#include <stdio.h>
/**
* main - prints file name from which it was compiled
*
* Return: Always 0 (Success)
*/
int ain(void)
{
       printf("%s\n", __FILE__);
       return (0);
}
