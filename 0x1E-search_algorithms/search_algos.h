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

#endif /*SORT_ALGO*/