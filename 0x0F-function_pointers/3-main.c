#include "3-calc.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc > 0 && !(argc >= 3))
		get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));

	return (0);	
}
