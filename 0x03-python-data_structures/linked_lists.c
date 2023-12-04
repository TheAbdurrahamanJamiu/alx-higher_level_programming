#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list_int - prints all elements of a list_int_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t print_list_int(const list_int_t *h)
{
    const list_int_t *current;
    unsigned int n; /* number of nodes */

    current = h;
    n = 0;
    while (current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        n++;
    }

    return (n);
}

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer of first node of list_int_t list
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
list_int_t *add_nodeint_end(list_int_t **head, const int n)
{
    list_int_t *new;
    list_int_t *current;

    current = *head;

    new = malloc(sizeof(list_int_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next != NULL)
            current = current->next;
        current->next = new;
    }

    return (new);
}

/**
 * free_list_int - frees a list_int_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_list_int(list_int_t *head)
{
    list_int_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}
