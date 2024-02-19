include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sort.h"
#include "deck.h"

/**
 * swap_next - swaps node with next node
 *
 * @deck: address of pointer to head
 * @node: node to swap
 */

void swap_next(deck_node_t **deck, deck_node_t *node)
{
        node->next->prev = node->prev;
        if (node->prev)
                node->prev->next = node->next;
        else
                *deck = node->next;
        node->prev = node->next;
        node->next = node->next->next;
        node->prev->next = node;
        if (node->next)
                node->next->prev = node;
}

/**
 * deck_len - returns the length of a card deck
 *
 * @h: head node to the deck
 *
 * Return: the size of the deck
 */

size_t deck_len(const deck_node_t *h)
{
        size_t cnt = 0;

        while (h != NULL)
        {
                cnt++;
                h = h->next;
        }
