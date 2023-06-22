#include <stdio.h>

/**
 *_isdigit - check if the chaacter is digit or not 
 *@c : the charactere to be checked
 *
 *return : 1 if c is digit and 0 if it's not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
