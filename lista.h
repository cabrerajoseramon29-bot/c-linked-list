#ifndef LIST_H_
#define LIST_H_

typedef struct List List;

#include <stddef.h>

/*lifecycle*/
List *list_create(void);
void list_destroy(List *l);

/*access*/
size_t list_size(const List *l);
int list_empty(const List *l);
int list_front(const List *l, int *out);
int list_back(const List *l, int *out);
int list_get(const List *l, size_t pos, int *out);

/*insertion*/
int list_push_front(List *l, int valor);
int list_push_back(List *l, int valor);
int list_insert_at(List *l, size_t pos, int valor);

/*remove*/
int list_pop_front(List *l, int *out);
int list_pop_back(List *l, int *out);
int list_remove(List *l, int valor, int *out);

/*operation*/
int list_reverse(List *l);

/*print*/
void list_print(const List *l);

#endif
