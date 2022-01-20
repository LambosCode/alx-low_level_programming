#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

int _strlen(char *s);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *malloc_checked(unsigned int b);

void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
