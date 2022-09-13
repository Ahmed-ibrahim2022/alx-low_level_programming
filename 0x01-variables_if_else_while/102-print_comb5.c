																			{
																								for (l = '0'; l <= '9'; l++)
																													{
																																			if ((i == k && j < l) || (i < k))
		#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Return: 0
 */
int main(void)
{
int c;
int d;
int e;
int f = 0;

while (f < 10)
{
	e = 0;
	while (e < 10)
	{
		d = 0;
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (!(f == c && e == d))
				{
					putchar('0' + f);
					putchar('0' + e);
					putchar(' ');
					putchar('0' + d);
					putchar('0' + c);
					if (!(f + e == 18 && c + d == 17 && d == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			d++;
		}
		e++;
	}
	f++;
}
putchar('\n');
return (0);
}																																							{
																																															if (i != k || j != l)
																																																					{
																																																												putchar(i);
																																																																		putchar(j);
																																																																								putchar(' ');
																																																																														putchar(k);
																																																																																				putchar(l);
																																																																																									if (i == '9' && j == '8' && k == '9' && l == '9')
																																																																																																break;
																																																																																														putchar(',');
																																																																																																			putchar(' ');
																																																																																																								}
																																																				}
																																							}
																											}
																	}
	
