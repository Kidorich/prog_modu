#include <stdio.h>
#include <stdlib.h>
#include "arbres.h"
#include "stack.h"

// creer noeud
Node* create_node(int val){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}


//afficher un arbre
void print_tree(Node* tree){
    if(tree != NULL){
        printf("%d ", tree->data);
        print_tree(tree->left);
        print_tree(tree->right);
    }
}

//liberer un arbre
void free_tree(Node* tree){
    if(tree != NULL){
        free_tree(tree->left);
        free_tree(tree->right);
        free(tree);
    }
}

// creer un arbre de taille n
Node* create_tree_n(int n){
    if(n <= 0){
        return NULL;
    }
    else{
        Node* new_node = create_node(n);   
        new_node->left = create_tree_n((n-1)/2 + (n-1)%2);  
        new_node->right = create_tree_n((n-1)/2); 
        return new_node;
    }
}
