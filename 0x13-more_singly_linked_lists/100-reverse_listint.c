#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: double pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (*head == NULL)
		return (NULL);
	temp = *head;
	temp2 = temp->next;
	temp->next = NULL;
	while (temp2 != NULL)
	{
		*head = temp2;
		temp2 = temp2->next;
		(*head)->next = temp;
		temp = *head;
	}
	return (*head);
}
