#include "main.h"

/**
 * main - factorization of primes giving the
 * highest prime possible of a given number.
 *
 * Return: on success (0);
 */

int main(void)
{
	int64_t no, *primed;
	long int cnt = 0, st = 0;

	no = 612852475143;

	primed = primes(no, &cnt);
	while (st < cnt)
	{
		if (st == (cnt - 1))
			printf("%ld\n", primed[st]);
		st++;
	}
	free(primed);
	return (0);
}

/**
 * primes - factorization of numbers divisible
 * by itsef andd 1.
 * @no: long long is replaced with int64_t -> a typedef
 * from <"stdint.h"> library
 * @cnt: counts with an address from function in use
 *
 * Return: a pointer of length of primes in a number
 */

int64_t *primes(int64_t no, long int *cnt)
{
	int64_t *str;
	int64_t n = 2;

	*cnt = 0;
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
			*cnt = *cnt + 1;
		}
		else if (no % (n + 1) == 0)
		{
			n++;
			if (*cnt >= 1)
				str = remallocd(str, *cnt);
			str[*cnt] = n;
			no = no / n;
			*cnt = *cnt + 1;
		}
		else
		n++;
	}
	return (str);
}

/**
 * remallocd - copy data from a pointer and extend
 * it memory to new address
 * @str: pointer with old data
 * @cnt: amount of malloced space in heap to be created
 *
 * Return: interger values stored.
 */

int64_t *remallocd(int64_t *str, int64_t cnt)
{
	int64_t *more, kp = (int64_t)cnt;

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
