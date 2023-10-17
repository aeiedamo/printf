#include "main.h"

int main(void)
{
	char c = '!';
	char *str = "Hello, " "World";
	_printf("%%%s%c", str, c);
	return 0;
}
