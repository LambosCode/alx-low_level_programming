#include <stdio.h>

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ii = 48, jj = ii, kk = jj, ll = kk, cm = 44, spc = 32, spc1 = spc;

	while (ii < 58)
	{
		if (ii == kk && jj == ll)
			goto again;

		putchar(ii);
		putchar(jj);
		putchar(spc);
		putchar(kk);
		putchar(ll);
		putchar(cm);
		putchar(spc1);
again:
		if (kk == 57 && ll == 57)
		{
			jj++;
			kk = ii;
			ll = jj;
		}
		ll++;
		
		if (ll == 58)
		{
			kk++;
			ll = 48;
		}
		else if (kk == 58)
		{
			jj++;
			kk = 48;
			ll = 48;
		}
		else if (jj == 58)
		{
			ii++;
			ll = 48;
			kk = 48;
			jj = 48;
		}
		if (ii == 57 && jj == 57)
			break;
		if (ii == 57 && jj == 56)
		{
			cm  = 10;
			spc1 = 0;
		}
	}
	return (0);
}
