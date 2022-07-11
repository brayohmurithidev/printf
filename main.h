#ifndef _MAIN_H_
#define _MAIN_H_

#define INT_BITS (4 * 8)

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct call - struct call
 * @t: t - flag for data type
 * @f: function - assocated function
 *
 */
typedef struct call
{
	char t;
	int (*f)(char *, va_list, int);
} call_t;

int _printf(const char *format, ...);

#endif
