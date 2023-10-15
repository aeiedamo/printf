#include "main.h"

int write_char(char c) {
    int count = 0;
	char buf_c[2];
    buf_c[0] = c;
    buf_c[1] = '\0';

    count = write(1, &buf_c[0], 1);

    if (count == -1)
	{
        return (-1); }

    return (1);
}

int write_string(char *str, char buffer[]) {
    int len, count = 0, i = 0, n = 0;
    if (str == NULL) {
        return (-1);
    }
    len = strlen(str);
    for (i = 0; i < len; ++i)
	{
        buffer[i] = str[n];
        if (i == MAXBUFFER)
		 {
            print_buf(buffer, &i);
            count += i; }
        ++n; }

    if (i > 0) {
        print_buf(buffer, &i);
        count += i;
    }

    return count;
}