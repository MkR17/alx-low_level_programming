#include "lists.h"

/**
 * free_listint -This function frees a linked list
 * @head: head of a list.
 *
 * Return: returns nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
