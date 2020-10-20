#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "arbres.h"

int main()
{
    /*Stack sta = new_stack();

    if(is_empty_stack(sta))
        printf("vide");
    printf("non vide");*/

    Node* tree = create_tree_n(4);
    print_tree(tree);
    free(tree);
    return 0;
}