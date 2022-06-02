#!/usr/bin/python3
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 * *insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to address of head of list
 * @number: integer to be include in new node
 * Return: address of new node, or NULL if it failed
 */
int main(void)
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *head;
	listint_t *newnode, *temp;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    print_listint(head);

    printf("-----------------\n");

    insert_node(&head, 27);

    print_listint(head);

    free_listint(head);

    return (0);
}
