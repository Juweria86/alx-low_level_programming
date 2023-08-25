#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	char *str;
	struct node *next;
	unsigned int len;
}list_t;

size_t print_list(const list_t *h);





#endif
