/*
 * Fibonacci.c
 *
 *  Created on: 16/11/2010
 *      Author: imoren2x
 */

int f_fibonacci_ite(const int n)
{
	int i_minor = 0;
	int i_major = 1;
	int result;

	if ( n == 0 )
	{
		result = 0;
	}
	else if ( n == 1 )
	{
		result = 1;
	}
	else
	{
		int i_index;
		for ( i_index = 2; i_index <= n; i_index++ )
		{
			result = i_minor + i_major;
			i_minor = i_major;
			i_major = result;
		}
	}
	return result;
}

int f_fibonacci_rec(const int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return ( f_fibonacci_rec(n-1) + f_fibonacci_rec(n-2) );
	}
}
