#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * struct specifier - struct specifier
 * @valid: the valid character
 * @f: the functions associated
 */
typedef struct specifier
{
	char *valid;
	int (*f)(va_list);
} spec;
int _printf(const char *format, ...);
int print_c(va_list args);
int _putchar(char c);
int print_percent(va_list args);
int print_s(va_list args);
int print_d(va_list args);
int print_i(va_list args);
int (*get_func(char x))(va_list args);
int print_b(va_list va);
int print_u(va_list va);
int print_o(va_list va);
int print_x(va_list va);
int print_X(va_list va);
int print_p(va_list va);
int print_p_1(unsigned long int c);
int print_r(va_list va);
int print_R(va_list va);
char *malloc_str(char *str);
char *rot13(char *p);
int t_char(va_list va)
int t_string(va_list va)
int print_number(va_list va)

#endif
