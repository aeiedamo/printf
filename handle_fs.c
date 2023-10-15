#include "main.h"

/**
 * HANDLE_FS - handle format specfiers
 *@format: string
 *@i: index for the string format
 *@buffer: buffer
 *@index: index for the buffer
 *Return: number of printed charecters if success, -1 if failed
 */
int HANDLE_FS(const char *format, int *i, char buffer[], va_list arg)
{
	int n, fun = 4, count = 0;
	HANDLE arr[] = {
		{'c', hand_char},
		{'%', hand_per},
		{'s', hand_str},
		{'d', hand_numd}
	};
	 ++*i; 
	UNUSE (buffer);
	for (n = 0; n < fun; ++n) 
	{ 
		if (format[*i] == arr[n].FS)
		{
	count = (arr[n].F(arg));
	return (count);
		}
	}
	
	 return (-1);
}
