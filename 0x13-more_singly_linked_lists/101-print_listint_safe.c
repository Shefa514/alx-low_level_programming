#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: a pointer to be the head of linked list
 * Return: the number of node in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = 0;

	if (!head)
		exit(98);

	while (current)
	{
		nodes++;
		printf("[%p] %d\n", (void *)current, current->n);

		if (current <= current->next)
		{
			printf("linked list with a loop\n");
			exit(98);
		}
		current = current->next;
	}
	return (nodes);
}
