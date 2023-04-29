#include "lists.h"

/**
 * print_listint_safe - prints a linked listint_t list,
 * even if there is a loop
 * @head: pointer to first node in list
 *
 * Return: number of nodes in list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *temp = head;

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		printf("[%p] %d,
	}
