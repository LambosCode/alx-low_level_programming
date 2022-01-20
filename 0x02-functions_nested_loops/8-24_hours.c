#include "main.h"
int main(void)
{
    jack_bauer();
    return (0);
}
/**
 * jack_bauer - print 24hours time frame
 */
void jack_bauer(void)
{
	int hr = 0, mn = 0;

	for (; hr < 24; mn++)
	{
		if (mn == 60)
		{
			hr++;
			mn = 0;
		}

		if (hr == 24)
			break;

		_putchar((hr / 10) + 48);
		_putchar((hr % 10) + 48);
		_putchar(58);
		_putchar((mn / 10) + 48);
		_putchar((mn % 10) + 48);
		_putchar(10);
	}
}
