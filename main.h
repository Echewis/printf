#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
#include <string.h>
int printchar(char c);
#include <unistd.h>
#include <stdlib.h>
int string_p(char *c);
int numlength(int n);
void print_int(int n);
int handle_d_i(va_list list);
#endif /* MAIN_H */
