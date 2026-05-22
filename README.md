# Singly Linked List in C

Educational implementation of a singly linked list in C with manual memory management and modular API design.

## Features

- Push front / back
- Pop front / back
- Insert at position
- Remove by value
- Reverse list
- Front / back access
- Dynamic size tracking
- Tail pointer optimization (`cola`)
- Manual memory management

## API Overview

```c
Lista *lista_create(void);
void lista_destroy(Lista *l);

int lista_push_front(Lista *l, int valor);
int lista_push_back(Lista *l, int valor);

int lista_pop_front(Lista *l, int *out);
int lista_pop_back(Lista *l, int *out);

int lista_front(Lista *l, int *out);
int lista_back(Lista *l, int *out);

int lista_insert_at(Lista *l, int pos, int valor);
int lista_remove_at(Lista *l, int valor);

int lista_reverse(Lista *l);

size_t lista_size(Lista *l);
int lista_empty(Lista *l);
```

## Complexity

| Operation           | Complexity |
|--------------------|------------|
| push_front         | O(1)       |
| push_back          | O(1)       |
| pop_front          | O(1)       |
| pop_back           | O(n)       |
| insert_at          | O(n)       |
| remove_at          | O(n)       |
| front              | O(1)       |
| back               | O(1)       |
| get                | O(n)       |
| reverse            | O(n)       |

## Compilation

```bash
gcc -Wall -Wextra -Wpedantic -Werror -std=c11 *.c -o programa
```

## Example

```c
Lista *l = lista_create();

lista_push_back(l, 10);
lista_push_back(l, 20);
lista_push_front(l, 5);

lista_print(l);

/* Output:
5 -> 10 -> 20 -> NULL
*/

lista_destroy(l);
```

## Notes

This project was built for learning purposes with emphasis on:

- pointer manipulation
- dynamic memory management
- API consistency
- data structure invariants
- algorithmic complexity
