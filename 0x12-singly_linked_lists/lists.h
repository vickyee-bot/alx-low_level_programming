#ifndef LISTS_H
#define LISTS_H

typedef struct node
{
	int data;
	struct node *next;
	} node_t;
typedef struct
{
	node_t *head;
}list_t;

typedef unsigned long size_t;
void list_add(list_t *list, int data);
void list_remove(list_t *list, int data);
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
