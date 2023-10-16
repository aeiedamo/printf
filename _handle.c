#include "main.h"

buffer *_handle(buffer *b, va_list args, char c)
{
	switch (c)
	{
		case '%':
			b->d[b->l] = '%';
			b->l++;
			break;
		case 'c':
			b->d[b->l] = va_arg(args, int);
			b->l++;
			break;
		case 's':
			savestring(b, args);
			break;
		case 'r':
			b->d[b->l] = '%';
			b->l++;
			b->d[b->l] = 'r';
			b->l++;
			break;
		default:
			b->d[b->l] = c;
			b->l++;
	}

	return (b);
}
