#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/*Prototypes*/
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *up);
char *cap_string(char *cap);
char *leet(char *l);
char *rot13(char *r);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);


#endif /* MAIN_H */
