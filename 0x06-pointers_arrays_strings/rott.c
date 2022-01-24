char *rot13(char *str)
{
	int idx = 0;

	while (*(str + idx) != '\0')
	{
		int is_low_1 = *(str + idx) >= 'a' && *(str + idx) <= 'm';
		int is_low_2 = *(str + idx) >= 'A' && *(str + idx) <= 'M';
		int is_upper = *(str + idx) >= 'A' && *(str + idx) <= 'Z';
		int is_lower = *(str + idx) >= 'a' && *(str + idx) <= 'z';

		if (is_lower || is_upper)
		{
			*(str + idx) = (1 * (*(str + idx) + 13)) + (-1 * (*(str + idx) - 13));
		}
		idx++;
	}

	return (str);
}
