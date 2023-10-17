#include "main.h"

int is_it_base2(int num)
{
	int digit;

	while (num > 0)
	{
		digit = num % 10;
		if (digit != 0 && digit != 1)
		{
		return 0; 
		}

		num /= 10;
	}

	return (1); 
}


int is_it_base8(int num)
{
    while (num > 0)
    {
        int digit = num % 10;
        if (digit < 0 || digit > 7)
	{
            return 0;
        }

        num /= 10;
    }

    return (1);
}

/*
int is_it_base16(int num)
{} */