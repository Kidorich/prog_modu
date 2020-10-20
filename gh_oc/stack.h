#ifndef stack_h
#define stack_h

/* Structures */
typedef enum
{
    false,
    true
}Bool;

typedef struct Stack
{
    int data;
    struct Stack* next;
}Stack;

/* Instances*/
typedef Stack* stack;

/*prototypes*/
void new_stack(void);
Bool is_empty_stack(Stack st);
Stack push_stack(Stack st, int x);
#endif