#include "main.h"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		printf("please provide a time-frame in seconds\n");
		return (0);
	}
	ttime(_atoii(av[ac - 1]));
	return (0);
}

int *ttime(int sec)
{
	int tm_kp[2];
	clock_t si = clock(), s = si;
	long int msc = 0, smn = 0, mn = 0, hr = 0, day = 24;

		for (;; )
		{
			si--;
			if (si == 0)
			{
				msc++;
				si  = clock();
				if (msc == 60)
				{
					smn++;
					msc = 0;
					if (sec > 0)
						sec--;
					else
						break;
					if (smn == 60)
					{
						mn++;
						smn = 0;
						if (mn == 60)
						{
							mn = 0;
							hr++;
							if (hr == 24)
								break;
						}
						_putchar((hr / 10) + 48);
						_putchar((hr % 10) + 48);
						_putchar(58);
						_putchar((mn / 10) + 48);
						_putchar((mn % 10) + 48);
						_putchar(10);
					}
				}
			}
		}	
	tm_kp[0] = hr;
	tm_kp[1] = mn;
}
int _putchar(char chr)
{
	return(write(1, &chr, 1));
}
int _atoii(char *s)
{
	int x = 1, unit = 10;

	while (s)
	{
		if (*s == 0)
			return (0);

		if (*s == 45)
		{
			x *= -1;
			s++;
		}

		if (*s >= 48 && *s <= 57)
		{
			x *= (*s - 48);
again:
			if (s[1] >= 48 && s[1] <= 57)
			{
				s++;
				x *= unit;
				if (x > 0)
					x += (*s - 48);
				else
					x += ((*s - 48) * -1);
				goto again;
			}
			else
				return (x);
		}
		if (*s != 45)
			s++;
	}
	return (0);
}
