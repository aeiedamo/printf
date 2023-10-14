#include "main.h"

/**
 * HANDLE_FS - handle format specfiers
 *@format: string
 *@i: index for the string format
 *@buffer: buffer
 *@index: index for the buffer
 *Return: number of ptinted charecters
 */
int HANDLE_FS(char *format, int i, char buffer[], int index, va_list arg)
{
int i = 0;
int fun = 'num of funcs'
HANDLE arr []=
{
{'c', hand_char}, {'%', hand_per}, {'s', hand_str}
};

for (i = 0; i < fun; ++i)
{
	if (format[i] == arr[i].FS)
	return (arr[i].Fs());
}

return (-1);
}
