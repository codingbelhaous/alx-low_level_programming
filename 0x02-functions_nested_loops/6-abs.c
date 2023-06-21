#include "main.h"
/**
* _abs - Function that print out the absolute value
*
* @num: the integer number
*
* Return: -num if num < 0 else num
*/
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
	_putchar('\n');
}
