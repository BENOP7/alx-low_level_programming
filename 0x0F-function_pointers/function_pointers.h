#ifndef POINTERS_H
#define POINTERS_H

#include <stdio.h>
#include <stdlib.h>
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif