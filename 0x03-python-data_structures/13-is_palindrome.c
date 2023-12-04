#include "lists.h"

/**
 * reverse_list_int - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
void reverse_list_int(list_int_t **head)
{
  list_int_t *prev = NULL;
  list_int_t *current = *head;
  list_int_t *next = NULL;

  while (current)
    {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }

  *head = prev;
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(list_int_t **head)
{
  list_int_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

  if (*head == NULL || (*head)->next == NULL)
    return (1);

  while (1)
    {
      fast = fast->next->next;
      if (!fast)
	{
	  dup = slow->next;
	  break;
	}
      if (!fast->next)
	{
	  dup = slow->next->next;
	  break;
	}
      slow = slow->next;
    }

  reverse_list_int(&dup);

  while (dup && temp)
    {
      if (temp->n == dup->n)
	{
	  dup = dup->next;
	  temp = temp->next;
	}
      else
	return (0);
    }

  if (!dup)
    return (1);

  return (0);
}
