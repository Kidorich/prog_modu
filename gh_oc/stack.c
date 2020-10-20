#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack new_stack(void)
{
    return NULL;
}
 
Bool is_empty_stack(Stack st)
{
    if (st == NULL)
        return true;
    return false;
}

Stack push_stack(Stack st, int x)
{
    Stack* element;
    element = malloc(sizeof(*element));

    if (element == NULL){
        printf("Probleme allocation dynamique!\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = st;

    return element;
}