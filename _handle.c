#include "main.h"

buffer* _handle(buffer *b, va_list args, char c, int *n)
{
	switch (c)
	{
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
		case 'i':
		saveint(b, args);
		break;
		case 'd':
		saveint(b, args);
		break;
		case 'b':
		binary(b, args);
		break;
		case 'r':
			b->d[b->l] = '%';
			b->l++;
			b->d[b->l] = 'r';
			b->l++;
			break;
			default:
			++*n;
				break;
	}

	return (b);
}
