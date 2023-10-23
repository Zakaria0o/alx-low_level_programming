#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts
 * @head: A pointer
 * Return: If the list is not looped - 0.
 * Otherwise -the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *harruma, *achux;
	size_t n = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	harruma = head->next;
	achux = (head->next)->next;

	while (achux)
	{
		if (harruma == achux)
		{
			harruma = head;
			while (harruma != achux)
			{
				n++;
				harruma = harruma->next;
				achux = achux->next;
			}

			harruma = harruma->next;
			while (harruma != achux)
			{
				n++;
				harruma = harruma->next;
			}

			return (n);
		}

		harruma = harruma->next;
		achux = (achux->next)->next;
	}

	return (0);
}
/**
 * print_listint_safe - Prints
 * @head: A pointer
 * Return: The number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, index = 0;

	n = looped_listint_len(head);

	if (n == 0)
	{
		for (; head != NULL; n++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < n; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (n);
}
