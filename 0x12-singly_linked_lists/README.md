# Singly linked lists
#### Learning Objectives
- When and why using linked lists vs arrays
- How to build and use linked lists
#### Requirements
- The prototypes of all your functions and the prototype of the function _putchar should be     
included in your header file called `lists.h`
- All your header files should be include guarded
_ _ _ 

***Please use this data structure for this project:***

```cpp
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
```
___
