#include <stdarg.h>

/**
  *
  *
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int res = 0;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		res += va_arg(nums, int);

	return (res);
}
