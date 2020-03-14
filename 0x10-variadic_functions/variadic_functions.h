#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * formats - typedef for struct
 *
 * @c: character
 * @fp: function pointer
 *
 * Description: Struct that holds a format character and the function
 * that it corelates to
 */


typedef struct {
	char* c;
	void (*fp)(va_list);
} formats;


#endif /* VARIADIC_FUNCTIONS_H */
