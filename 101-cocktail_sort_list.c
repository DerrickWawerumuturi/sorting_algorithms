#include "sort.h"

/**
 * list_len - function returns length of list
 * @list: head of list
 *
 * Return: length
 */
size_t list_len(listint_t *list)
{
        size_t len = 0;

        while (list)
        {
                len++;
                list = list->next;
        }
        return (len);
}

/**
 * switch_nodes - function swaps nodes at pointer p with the following node
 * @list: head of list
 * @p: pointer to node
 */
void switch_nodes(listint_t **list, listint_t **p)
{
        listint_t *one, *two, *three, *four;

        one = (*p)->prev;
        two = *p;
        three = (*p)->next;
        four = (*p)->next->next;
        two->next = four;
        if (four)
                four->prev = two;
        three->next = two;
        three->prev = two->prev;
        if (one)
                one->next = three;
        else
                *list = three;
        two->prev = three;
        *p = three;
}
