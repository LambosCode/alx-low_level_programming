#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct rd_file{
	char charc;
}rd_fl;

int append_text_to_file(const char *filename, char *text_content);

ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char c);

int create_file(const char *filename, char *text_content);

char *str_concat(char *s1, char *s2);

int _strlen(char *s);

char *str_remake(char *, int);

#endif /* HOLBERTON_H */
