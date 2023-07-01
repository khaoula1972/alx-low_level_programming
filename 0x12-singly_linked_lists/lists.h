#ifndef LISTS_H
#define LISTS_H

/* Let's define first our linked list structure */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* The librairies we're gonna use */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/* The fucntions */
size_t print_list(const list_t *h);

#endif
