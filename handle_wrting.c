#include "main.h"

int write_char(char c)
{
	int count = 1;
	char buf_c[2];
	buf_c[0] = c;
	buf_c[1] = '\0';

	count = write(1, &buf_c[0], 1);

	if (count == -1)
	{
		return (-1); }

	return (count);
}

int write_string(char *str) 
{
	int len = 0, count = 0, i = 0, n = 0;
	char buf_s[MAXBUFFER];

	if (str == NULL)
	{
		return (-1); }

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		buf_s[i] = str[n++];
		if (i >= MAXBUFFER - 1)
		 {
			count = count + i;
			print_buf(buf_s, &i);}
	 }

	if (i > 0) {
		count = count + i;
		print_buf(buf_s, &i); }

	return (count);
}

/**
 * convertnum - convert numbers to strings.
 *@num: the number.
 *
*/
int convertnum(int num)
{
	 char str[MAXBUFFER];
	int i = 0, count = 0, j, len;
	int Negative = 0;
   

	if (num < 0) {
		Negative = 1;
		num = -num;
	}

	/* Extract digits in reverse order and then put thier ascci in str */
	do {
		str[i++] = '0' + num % 10;
		num /= 10;                  /*remove the last digit*/
	} while (num > 0);

	/*handle the sign when its negative*/
	if (Negative) {
		str[i++] = '-';
	}

	str[i] = '\0'; /* Null-terminate the string */

	/*this loop to reverse the string to the rigth order*/
	 len = i;
	for (j = 0; j < len / 2; j++) {
		char temp = str[j];
		str[j] = str[len - j - 1];
		str[len - j - 1] = temp;
	}
	count = write_string(str);
	
	if (count < 0)
	return (-1);

	return (count);
}