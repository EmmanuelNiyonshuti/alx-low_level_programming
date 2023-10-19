# Singly Linked Lists Project

## Objectives

- Understand when and why to use linked lists vs. arrays.
- Build and manipulate linked lists.
- Demonstrate proficiency in dynamic memory allocation.

## Guidelines

- Use editors: vi, vim, emacs.
- Compile on Ubuntu 20.04 LTS using `gcc`.
- Follow Betty style.
- Limit functions to 5 per file.
- Restrict C standard library functions to `malloc`, `free`, and `exit`.
- Use the provided `list_t` structure.

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

## Author
NIYONSHUTI Emmanuel
