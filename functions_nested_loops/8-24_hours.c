#include "main.h"

/**
 * jack_bauer - print every minute to 00:00
 * at 23:59
 */
void jack_bauer(void)
{
	int hour = 0, minute;

	while (hour <= 23)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minute / 10 + '0');
			_putchar(minute % 10 + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
