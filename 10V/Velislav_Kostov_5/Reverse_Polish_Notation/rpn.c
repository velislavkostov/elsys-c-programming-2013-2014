#include "rpn.h"
#include <stdio.h>

int RPN(instruction_t *a){
    switch(a->operation){
        case '+' : return (a->first_number + a->second_number);
        break;

        case '-' : return (a->first_number - a->second_number);
        break;

        case '*' : return (a->first_number * a->second_number);
        break;

        case '/' :
            if (a->second_number == 0){
                printf(INV_DIV);
                return 0;
            }
            else return (a->first_number / a->second_number);
        break;

        default :
        printf(INV_INPUT);
        a->error_flag = ERROR_FLAG;
        return 0;
        break;
    }
}

int push_result(undo_stack_t *undo_stack, int result_value){
    if(undo_stack->size < UNDO_TIMES){
        undo_stack->results[undo_stack->size++] = result_value;
        return 0;
    }
    else {
        printf("Stack overflow\n");
        return -1;
    }
}

void init_stack(undo_stack_t *undo_stack){
    int i;
    for(i = 0; i <= UNDO_TIMES; i++){
        undo_stack->results[i] = 0;
    }
}

int pop(undo_stack_t *undo_stack){
    if(undo_stack->size < UNDO_TIMES){
        undo_stack->results[--undo_stack->size] = 0;
        return 0;
    }
    else {
        printf("Stack underflow");
        return -1;
    }
}
