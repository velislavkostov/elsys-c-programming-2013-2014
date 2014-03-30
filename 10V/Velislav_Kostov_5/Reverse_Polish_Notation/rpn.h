#ifndef RPN_H_INCLUDED
#define RPN_H_INCLUDED
#endif // RPN_H_INCLUDED

#define DEFAULT_FLAG 'D'
#define ERROR_FLAG 'E'
#define HANDLED_INPUT_FLAG 'H'

#define INV_DIV "Divisor can't be 0\n"
#define INV_INPUT "Invalid input\n"

#define UNDO_TIMES 5

typedef struct{
    int first_number;
    int second_number;
    char operation;
    char error_flag;
} instruction_t;

typedef struct{
    int results[UNDO_TIMES];
    int size;
} undo_stack_t;


int RPN(instruction_t *a);
int push_result(undo_stack_t *undo_stack, int result_value);
void init_stack(undo_stack_t *undo_stack);
int pop(undo_stack_t *undo_stack);
