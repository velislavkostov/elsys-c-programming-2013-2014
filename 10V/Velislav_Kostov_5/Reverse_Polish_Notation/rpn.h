#ifndef RPN_H_INCLUDED
#define RPN_H_INCLUDED
#endif // RPN_H_INCLUDED

#define DEFAULT_FLAG 'D'
#define ERROR_FLAG 'E'
#define INV_DIV "Divisor can't be 0\n"
#define INV_INPUT "Invalid input\n"

typedef struct{
    int first_number;
    int second_number;
    char operation;
    char error_flag;
} instruction_t;


int RPN(instruction_t *a);
