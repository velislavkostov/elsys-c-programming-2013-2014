#include "rpn.h"
#include <stdio.h>

int RPN(instruction_t *a){
    switch(a->operation){
        case '+':return (a->first_number + a->second_number);
        break;

        case '-': return (a->first_number - a->second_number);
        break;

        case '*': return (a->first_number * a->second_number);
        break;

        case '/':
            if (a->second_number == 0){
                printf(INV_DIV);
                return 0;
            }
            else return (a->first_number / a->second_number);
        break;

        default: printf(INV_INPUT);
        a->error_flag = ERROR_FLAG;
        return 0;
        break;
    }
}

