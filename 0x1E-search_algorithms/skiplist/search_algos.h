#ifndef SORT_ALGO
#define SORT_ALGO

#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - singly
 *
 * @n: Integer
 * @index: Index of 
 * @next: Pointer 
 *
 * Description: singly  
 * 
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/*FUNCTION*/


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
skiplist_t *create_skiplist(int *array, size_t size);
void print_skiplist(const skiplist_t *list);
void free_skiplist(skiplist_t *list);
void init_express(skiplist_t *list, size_t size)

#endif /*SORT_ALGO*/