#include "main.h"

/**
 * HANDLE_FS - handle format specfiers
 *@format: string
 *@i: index for the string format
 *@buffer: buffer
 *@index: index for the buffer
 *Return: number of printed charecters if success, -1 if failed
 */
int HANDLE_FS(char *format, int i, char buffer[], int index, va_list arg)
{
	int i = 0;

	int (*ptrfunc[])(const char *, va_list) = {hand_char, hand_str,
	hand_per};
}
