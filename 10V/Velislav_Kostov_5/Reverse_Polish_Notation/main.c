#include <stdio.h>
#include "rpn.h"

int main()
{

    instruction_t a = {0,0,'a',DEFAULT_FLAG};
    undo_stack_t undo;
    init_stack(&undo);
    int i;
    while(!(a.error_flag != DEFAULT_FLAG)){
        printf("Type format (number / number / operation)\n\t");

        scanf("%d %d %c",&a.first_number,&a.second_number,&a.operation);
        //This line acts like drain for our stack
        undo.size == UNDO_TIMES - 1 ? pop(&undo) : push_result(&undo,RPN(&a));

        for(i = 0; i < undo.size; i++){
            if (i == 0) printf("UNDO STACK RESULTS");
            printf("\n| %d \n",undo.results[i]);
        }
    }

    return 0;
}
