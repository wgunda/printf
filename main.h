#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define BUFFER 1024

int zputcha(char a);

int zput(char *str);

void zbin_print(int number);

void zbuffer_write(char *buffer);

int _printf(const char *format, ...);



#endif /* MAIN_H */

