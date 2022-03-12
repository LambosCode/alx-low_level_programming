#include <stdio.h>
void checkings(int *ii, int *jj, int *kk, int *ll);
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ii = 48, jj = ii, kk = jj, ll = kk, cm = 44, spc = 32, cnt = 0;

	while (ii < 58)
	{
		if (ii == kk && jj == ll)
			goto again;

		putchar(ii);
		putchar(jj);
		putchar(spc);
		putchar(kk);
		putchar(ll);
		if (cnt < 4949)
		{
			putchar(cm);
			putchar(spc);
			cnt++;
		}
again:
		checkings(&ii, &jj, &kk, &ll);
		if (ii == 57 && jj == 57)
			break;
	}
	putchar(10);
	return (0);
}
/**
 * checkings - format the correct output address
 * @ii: first digit
 * @jj: second digit
 * @kk: third digit
 * @ll: fourht digit
 */
void checkings(int *ii, int *jj, int *kk, int *ll)
{
		if (*kk == 57 && *ll == 57)
		{
			if (*jj == 57)
			{
				*ii = *ii + 1;
				*jj = 48;
				*kk = *ii;
				*ll = *jj;
			}
			else
			{
				*jj = *jj + 1;
				*kk = *ii;
				*ll = *jj;
			}
		}

		*ll = *ll + 1;
		if (*ll == 58)
		{
			*kk = *kk + 1;
			*ll = 48;
		}
		else if (*kk == 58)
		{
			*jj = *jj + 1;
			*kk = 48;
			*ll = 48;
		}
		else if (*jj == 58)
		{
			*ii = *ll + 1;
			*ll = 48;
			*kk = 48;
			*jj = 48;
		}
}
