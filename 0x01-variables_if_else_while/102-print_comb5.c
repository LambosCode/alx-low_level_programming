#include <stdio.h>:

/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ii = 48, jj = 48, kk = 48, ll = 49, cm = 44, spc = 32, m_c = 0;

	while (ii < 58)
	{
		putchar(ii);
		putchar(jj);
		putchar(spc);
		putchar(kk);
		putchar(ll);
		putchar(cm);
		putchar(spc1);
		ll++;
		m_c++;

		if (ll == 58)
		{
			kk++;
			ll = 48;
		}
		if (kk == 58)
		{
			jj++;
			ll = 48 + 2;
			kk = 48;
		}
		if (jj == 58)
		{
			ii++;
			ll = 48;
			kk = 48;
			jj = 48;
		}
		if (m_c == 9721)
			break;
		if (m_c == 9720)
		{
			cm  = 10;
			spc1 = 0;
		}
	}
	return (0);
}
