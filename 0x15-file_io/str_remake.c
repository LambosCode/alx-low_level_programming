#include "main.h"

char *str_remake(char *old_d, int byt)
{
	int cnt = 0, nbyte = 1025;
	char *new_s;

	if (!old_d)
		return (0);
	if ((byt % 1024) != 0 && byt > 1024)
	       old_d -= (byt - (byt % 1024));	
	else if (byt > 1024)
		old_d -= (byt - 1024);
	while (old_d[cnt] != 0)
		cnt++;
	new_s = malloc(cnt + nbyte);

	if (!new_s)
		return (0);
	cnt = 0;
	while (old_d[cnt] != 0)
	{
		new_s[cnt] = old_d[cnt];
		cnt++;
	}
	new_s[cnt + 1] = 0;
	free(old_d);
	old_d = 0;
	old_d = new_s;
	new_s = 0;

	return (old_d + cnt);
}
