#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <time.h>

int *t_time(int mnt);

int *ttime(int mnt);

uint64_t *m_primes(uint64_t *str, int *cnt, uint64_t *leap, uint64_t *sbt, uint64_t *run);

void print_number(int n);

uint64_t *reprimed(uint64_t *str, int *cnt);

uint64_t *primes(uint64_t no, int *cnt);

void patch_print(int *cnt, int x, int64_t n, int64_t *i_sqrd, int *len);

int _int_len(int i);

int64_t _int_sqr(int64_t x, int y);

uint64_t _atoi(char *s);

uint64_t *remallocd(uint64_t *str, int cnt);

int _putchar(char c);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

#endif /*MAIN_H*/
