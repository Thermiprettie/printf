#include "main.h"

/**
 * print_d - to print d
 */

int print_d(va_list types, char buffer[], int flags, int width,
		int precision, int size)
{
	long int d, copy;
	unsigned int ret = 0, count = 0;
	char pad, space = ' ', neg = '-', plus = '+';

	if (size == LONG)
		d = va_arg(types, int);
	else
		d = va_arg(types, int);
	if (size == SHORT)
		d = (short)d;

	/* Handle space flag */
	if (SPACE_FLAG == 1 && d >= 0)
		ret += _memcpy(buffer, &space, 1);

	if (precision <= 0 && NEG_FLAG == 0) 
		/* Handle width  */
	{
		if (d == LONG_MIN)
			count += 19;
		else
		{
			for (copy = (d < 0) ? -d : d; copy > 0: copy /= 10)
				count++;
		}

		count += (d == 0) ? 1 : 0;
		count += (d < 0) ? 1 : 0;
		count += (PLUS_FLAG == 1 && d >= 0) ? 1 : 0;
		count += (SPACE_FLAG == 1 && d >= 0) ? 1 : 0;

		if (ZERO_FLAG == 1 && PLUS_FLAG == 1 && d >= 0)
			ret += _memcpy(buffer, &plus, 1);

		if (ZERO_FLAG == 1 && d < 0)
			ret += _memcpy(buffer, &neg, 1);
		pad = (ZERO_FLAG == 1) ? '0' : ' ';
		for (width -= count; width > 0; width --)
			ret += _memcpy(buffer, &pad, 1);
	}

	if (ZERO_FLAG == 0 && d < 0)
		ret += _memcpy(buffer, &neg, 1);

	if (ZERO_FLAG == 0 && (PLUS_FLAG == 1 && d >= 0))
		ret += _memcpy(buffer, &plus, 1);

	if (!(d == 0 && prec == 0))
		ret += convert_sbase(buffer, d, "0123456789", flags, 0, precision);

	ret += print_neg_width(buffer, ret, flags, width);

	return (ret);
}
