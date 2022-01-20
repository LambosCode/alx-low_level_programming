#include "variadic_functions.h"
void func(va_list, char);

int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    print_all("");
    print_all(NULL);
    print_all("fcsi", 3.14435, 'H', NULL, 402);

    return (0);
}

void print_all(const char * const format, ...)
{

	char flag[] = "cifs";
	int in = 0, i = 0;
	va_list arr;

	va_start(arr, format);
	if (!format || *format == 0)
		return;
	while (format[i] != 0)
	{
		while (flag[in] != 0)
		{
			if (format[i] == flag[in])
			{
				func(arr, flag[in]);
				if (format[i + 1] != 0)
					printf(", ");
			}
			in++;
		}
		in = 0;
		i++;
	}
	printf("\n");
}


void func(va_list arr, char flg)
{
	char *ch, c;
	int d;
	float f;

	if (flg == 'c')
	{
		c = va_arg(arr, int);
		printf("%c", c);
	}
	else if (flg == 'i')
	{
		d = va_arg(arr, int);
		printf("%d", d);
	}
	else if (flg == 'f')
	{
		f = va_arg(arr, double);
		printf("%f", f);
	}
	else if (flg == 's')
	{
		ch = va_arg(arr, char *);
		if (!ch)
			printf("nil");
		else
			printf("%s", ch);
	}
	else
		return;
}
