#include <stdio.h>

int main(void)
{
int i = 'a';

while (i <= 'z')
{
if  ( i != 'e' && i != 'q')
{
putchar(i);
}
i++;
}
return 0;
}
