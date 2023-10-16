#include "main.h"

buffer* _handle(buffer *b, va_list args, char c)
{
	switch (c)
	{
		case 'c':
			b->d[b->l++] = (char) va_arg(args, int);
			break;
		case 's':
			savestring(b, args);
			break;
		default:
			b->d[b->l++] = c;
			break;
	}

	return (b);
}
