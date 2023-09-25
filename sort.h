#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

#define UP 0
#define DOWN 1

/**
 * enum bool - The enumeration of boolean values.
 * @false: 0.
 * @true: 1.
 */
typedef enum bool
{
    false = 0,
    true
} bool;

/**
 * struct listint_s - The Doubly linked list node.
 *
 * @n: The Integer stored in the node.
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list.
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void quick_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);

#endif /* SORT_H */
