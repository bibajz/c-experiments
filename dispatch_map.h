typedef int (*BinaryOPFunc)(int,int);

int sumFunc(int a, int b) {
    return a + b;
}

int prodFunc(int a, int b) {
    return a * b;
}

BinaryOPFunc BinaryOPDispatchMap(char op) {
    switch(op) {
        case '+':
            return sumFunc;
        case '*':
            return prodFunc;
        default:
            printf("Unrecognized operator: %c. Exiting...\n", op);
            exit(1);
    }
}