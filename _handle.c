#include "main.h"

buffer* _handle(buffer *b, va_list args, char c)
{
	switch (c)
	{
		case ('c'):
			c = (char) va_arg(args, int);
			b->d[b->l++] = c;
			break;
		case ('s'):
			savestring(b, args);
			break;
		case ('i'):
			saveint(b, args);
			break;
		case ('d'):
			saveint(b, args);
			break;
		case ('b'):
			binary(b, args);
			break;
		case ('r'):
			b->d[b->l++] = '%';
			b->d[b->l++] = 'r';
			break;
		case ('%'):
		default:
			b->d[b->l++] = c;
			break;
	}

	return (b);
}
