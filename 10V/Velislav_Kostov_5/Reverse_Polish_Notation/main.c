#include <stdio.h>
#include "rpn.h"

int main()
{
    instruction_t a = {0,0,' ',DEFAULT_FLAG};
    while(!(a.error_flag != DEFAULT_FLAG)){
        printf("Type format (number / number / operation )\n\t");
        scanf("%d %d %c",&a.first_number,&a.second_number,&a.operation);
        printf("Result:\n%d\n\n",RPN(&a));
    }
    return 0;
}
