a)

#define MAX_STACK 100
#define Item int

typedef struct stack_type{
	Item content[MAX_STACK];
	int top;
} *Stack;

b)
#define MAX_STACK 100

typedef struct stack_type{
	struct node *top;
} *Stack;