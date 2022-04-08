#ifndef MAIN_H
#define MAIN_H

int *array_range(int, int);
char *string_nconcat(char *, char *, unsigned int);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
