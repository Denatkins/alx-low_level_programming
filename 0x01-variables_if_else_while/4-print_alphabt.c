#include <stdio.h>
#include <ctype.h>
/**
*main - Entry poimt
*Return: Always 0
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar (letter);
}
break;
}
putchar ('\n');
return (0);
}
