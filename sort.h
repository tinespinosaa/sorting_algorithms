#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/**
* struct listint_s - Doubly linked list node
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
**/

typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void swap(int *a, int *b);
void merge_sort(int *array, size_t size);
void actual_merge(int *array, int *temp, size_t left, size_t right);
void sub_sort(int *array, int *temp, size_t left, size_t mid, size_t right);
void heap_sort(int *array, size_t size);
void heapify(int *arr, int n, int i, int size);
void radix_sort(int *array, size_t size);
int get_max(int *array, int n);
void count(int *array, size_t size, int *buff, int lsd);
void radix_sort(int *array, size_t size);
#endif
