#include <stdio.h>
#include <stdlib.h>

#include "dispatch_map.h"


int main() {
    int i, j;
    char op;
    BinaryOPFunc binaryFunc;

    printf("1st operand:\t");
    scanf("%d", &i);

    printf("2nd operand:\t");
    scanf("%d", &j);

    printf("Operator:\t");
    scanf(" %c", &op);  // cheaky hack becase '\n' after 2nd operand input is still in buffer

    binaryFunc = BinaryOPDispatchMap(op);
    printf("%d %c %d = %d\n", i, op, j, binaryFunc(i, j));

    /*
    Same thing can be achieved without assignment, but be wary of * necessity

    printf("%d %c %d = %d\n", i, op, j, (*BinaryOPDispatchMap(op))(i, j));

    */
}