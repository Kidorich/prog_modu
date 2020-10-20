#ifndef arbres_h
#define arbres_h

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

typedef Node* Tree;


Node* create_node(int val);
void print_tree(Node* tree);
void free_tree(Node* tree);
Node* create_tree_n(int n);

#endif