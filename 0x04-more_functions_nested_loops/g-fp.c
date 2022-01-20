#include "main.h"

int main(int ac, char **av)
{
	uint64_t no, *primed, stp = 1, div = 1;
	int cnt, st;

	printf("\n----------------------------------------------\n");
	printf("---Please do no that exceeding numbers over gigabyte values takes longer.\n\
	--Example 233,444,444,444,444.\n This program can accept multiple values\n");
	if (ac < 1)
	{
		printf("--You have made no inputs.\n");
		return (-1);
	}

	while (stp < ac)
	{
		no = _atoi(av[stp]);
		cnt = 0;
		st = 0;

		if (no <= 0)
		{
			printf("---Provide a valid no. greter than 0\n Or check if no. is not greater than \"18446744073709551615\"\n");
	    		return (-1);	
		}
		else if (no == 1)
		{
			printf("1\n");
			return (0);
		}
		else if (no > 10000000000000)
			printf("---You have over gigabyte value, this program might take longer.---\n");
		primed = primes(no, &cnt);
		while (st < cnt)
		{
			if (primed[st] == 1)
			{
				cnt--;
				primed[st] = 0;
				st++;
			}
			if (primed[st] > 0 && st < cnt)
				printf(" %lu ", primed[st]);
			div += primed[st];

			if (st < (cnt - 1) && (st + 1) < cnt && primed[st + 1] != 1)
				printf("*");
			if ((st + 1) % 10 == 0 && st > 0)
				printf("\n");
			st++;
		}
		printf("\n---Addition of divisor of %lu is ----%lu", no, div);
		if (div == no)
			printf("\n---%lu is a special.\n", div);
		st = 0;
		div = 1;
		printf("\n\n---Validating any error --- Please wait...\n");
		primed = reprimed(primed, &cnt);

		while (st < cnt)
		{
			printf(" %lu ", primed[st]);
			if (primed[st] != 1)
				div += primed[st];

			if (st < (cnt - 1))
				printf("*");
			if ((st + 1) % 10 == 0 && st > 0)
				printf("\n");
			st++;
		}
		stp++;
		printf("\n---Addition of divisor of %lu is ----%lu", no, div);
		if (div == no)
			printf("\n---%lu is a special.\n", div);
		printf("\n----------------------------------------------%lu-param\n", (stp - 1));
		if (stp > 1 && stp != ac)
			printf("\n----------------------------------------------\n");
		free(primed);
		primed = 0;
	}
	printf("\n----------------------------------------------\n\n");
	return (0);
}

uint64_t *primes(uint64_t no, int *cnt)
{
	uint64_t *str, *leap, rn = 0, nd;
     	uint64_t n = 2, *sbt, st = 1, lp = 0;
	uint64_t dpl = no, *run;

	*cnt = 0;
	sbt = &st;
	leap = &lp;
	run = &rn;
	str = malloc(sizeof(*str) * 1);
	if (!str)
		return (0);
	while (!(no < n))
	{
		if (no % n == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n;
			no = no / n;
			*sbt *= n;
			*cnt = *cnt + 1;
		}
		else if (no % (n + 1) == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = (n + 1);
			*sbt *= (n + 1);
			no = no / (n + 1);
			*cnt = *cnt + 1;
		}
		else
		{
			if (no % (n + 2) == 0)
			{
				if (*cnt >= 1)
					str = remallocd(str, *cnt);
				str[*cnt] = n + 2;
				no = no / (n + 2);
				*sbt *= (n + 2);
				*cnt = *cnt + 1;
			}
			else if (no % (n + 2) == 1)
				n += no % (n + 2) + 1;
			else
			{
				nd = (no % ((n + 1) + 1));
				n += (no % (no - nd) + 1);
				n--;
			}

			*leap = *leap + 1;
		}
		*run = *run + 1;

	}
	if (*sbt != dpl)
	{
		if (*cnt >= 1)
			str = remallocd(str, *cnt);
		str[*cnt] = no;
		*cnt = *cnt + 1;
	}
	else
		*sbt = dpl / str[*cnt - 1];

	str = m_primes(str, cnt, leap, sbt, run);
	*sbt += 0;
	printf("\n---This program went on a 1st run of -%lu- cycles!\n", *run);
	printf("Leap Jumps: ---%lu---cycle jump &\nAnd divisor multiplication = %lu\n", *leap, *sbt);
	printf("\n*********************************\n");
	printf("---Prime numbers of %lu:\n", dpl);
	return (str);
}

uint64_t *m_primes(uint64_t *str, int *cnt, uint64_t *leap, uint64_t *sbt, uint64_t *run)
{
	uint64_t kp = *cnt, kpl = *sbt, nd;
     	uint64_t n = 2, no, dpl, rn = *run;

	if (!str || !cnt)
		return (0);

	*cnt = *cnt - 1;
	no = str[*cnt];
	dpl = no * *sbt;
	*sbt = 1;

	if (no == 1)
	{
		*cnt = *cnt - 1;
		no = str[*cnt];
	}
	while (!(no < n) && !(n < 2))
	{
		if (no % n == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n;
			no = no / n;
			*sbt *= n;
			*cnt = *cnt + 1;
		}
		else if (no % (n + 1) == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n + 1;
			no = no / (n + 1);
			*sbt *= (n + 1);
			*cnt = *cnt + 1;
		}
		else
		{
			if (no % (n + 2) == 0)
			{
				if (*cnt >= 1)
					str = remallocd(str, *cnt);
				str[*cnt] = n + 2;
				no = no / (n + 2);
				*sbt *= n;
				*cnt = *cnt + 1;
			}
			else if (no % (n + 2) > 1)
				n += n + 1;
			else
			{
				nd = (no % ((n + 1) + 1));
				n += (no % (no - nd) + 1);
				n--;
			}
			*leap = *leap + 1;
		}
		*run = *run + 1;
	}
	if (*cnt < kp)
	{
		*sbt = *sbt * kpl * no;
		*cnt = *cnt + 1;
	}
	else if ((*sbt * kpl) != dpl)
	{
		if (*cnt >= 1)
			str = remallocd(str, *cnt);
		str[*cnt] = no;
		*sbt = dpl;
		*cnt = *cnt + 1;
	}
	printf("-Tracks primes: %lux\n", (*cnt - kp));
	return (str);
}

uint64_t *reprimed(uint64_t *str, int *cnt)
{
	uint64_t run = 0, tm = 0, sbyt = 1000;
     	uint64_t n = 2, no, byt = 1;
	
	if (!str || !cnt)
		return (0);

	*cnt = *cnt - 1;
	no = str[*cnt];

	while (!(no < n) && !(n < 2))
	{
		if (no % n == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n;
			no = no / n;
			*cnt = *cnt + 1;
		}
		else if (no % (n + 1) == 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = (n + 1);
			no = no / (n + 1);
			*cnt = *cnt + 1;
		}
		else
		{
			if (no % (n + 2) == 0)
			{
				if (*cnt >= 1)
					str = remallocd(str, *cnt);
				str[*cnt] = n;
				no = no / n;
				*cnt = *cnt + 1;
			}
			else
				n += 2;
		}
		
		if (n > ((no / 2) / byt) || (no / byt) < 0)
		{
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = no;
			*cnt = *cnt + 1;
			break;
		}
		tm++;
		if (tm >= sbyt)
		{
			printf("**\n-n-Divisor: %lu\n", n);
			tm = 0;
			byt *= 10;
			sbyt *= 10;
		}
		run++;
	}

	printf("\nThis program went on 2nd run of -%lu- cycles! - With no leaps.\n", run);
	printf("\n*********************************\n");
	printf("***Primes are:\n");
	return (str);
}

uint64_t *remallocd(uint64_t *str, int cnt)
{
	uint64_t *more;
	int kp = cnt;

	cnt++;
	more = malloc(sizeof(*more) * cnt);

	cnt = kp;
	kp = 0;

	while (kp < cnt)
	{
		more[kp] = str[kp];
		kp++;
	}
	more[kp] = 0;

	free(str);
	return (more);
}

uint64_t _atoi(char *s)
{
	uint64_t x = 1, unit = 10, cnt = 0, ln = 0, f_unt = 1;

	if(s == 0)
		return (0);
	while (s[ln] != 0)
		ln++;
	if (ln == 0 || ln > 20)
		return (0);
	while (s)
	{
		if (*s == 45)
		{
			x *= -1;
			s++;
		}

		if (*s >= 48 && *s <= 57)
		{
			x *= (*s - 48);
again:
			if (s[1] >= 48 && s[1] <= 57 && cnt < 19)
			{
				s++;
				cnt++;
				x *= unit;
				f_unt *= unit;
				if (x > 0)
				{
					x += (*s - 48);
					if (x % unit != (*s - 48))
						return (0);
					else if (x / f_unt != s[cnt * -1] - 48)
							return (0);
				}
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
