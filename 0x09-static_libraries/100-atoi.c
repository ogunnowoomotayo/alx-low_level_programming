#include "main.h"
#include <stdlib.h>

int _atoi(char *s)
{
	int gray = atoi(s);
	if (gray == 0 && *s != '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

