#ifndef HOL_PRINTF
#define HOL_PRINTF

#include <stdarg.h>
int _printf(const char *format, ...);
int _put(char c);

int print_char(va_list *);
int print_string(va_list *);
int print_decimal(va_list *);
int print_percent(va_list *);
int (*handler(char c))(va_list *);
char *_tostring(int n);
/**
*struct printers - printer functions
*@joker: his name
*@fun:his age
*Description: my little baby awesome dog
*/

typedef struct printers
{
	char joker;
	int (*fun)(va_list *);
} print_t;
print_t *get_funs();

#endif  /* HOL_PRINTF */
