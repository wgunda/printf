#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER 1024

int zputcha(char a);

int zput(char *str);

void bin_print(int number);

void buffer_write(char *buffer);

void *p_address(void *p);

int _printf(const char *format, ...);

int dig_cunt(int digit);

void prin_num(int elem);

#endif /* MAIN_H */

