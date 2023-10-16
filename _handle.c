#include "main.h"

buffer *_handle(buffer *b, va_list args, char c)
{
	char ch;

	switch (c)
	{
		case 0:
			break;
		case '%':
			b->d[b->l] = '%';
			b->l++;
			break;
		case 'c':
			c = va_arg(args, int);
			b->d[b->l] = c;
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
