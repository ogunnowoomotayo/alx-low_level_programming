#include "main.h"
#include <string.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int t_s;
	void *ptr;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t_s = nmemb * size;
	ptr = malloc(t_s);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, t_s);
	return (ptr);
}
