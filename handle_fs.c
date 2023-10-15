#include "main.h"

/**
 * HANDLE_FS - handle format specfiers
 *@format: string
 *@i: index for the string format
 *@buffer: buffer
 *@index: index for the buffer
 *Return: number of printed charecters if success, -1 if failed
 */
int HANDLE_FS(const char *format, int i, char buffer[], int index, va_list arg)
{
int n, fun = 6;

HANDLE arr[] = {
    {'c', hand_char},
    {'%', hand_per},
    {'s', hand_str}
};

	for (n = 0; n < fun; ++n) 
	{ 
		if (format[i + 1] == arr[n].FS) 
		{
		return (arr[n].F(arg, buffer));
		}
	}

	 return (-1);
}
