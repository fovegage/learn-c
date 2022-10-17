#include <stdio.h>


#ifndef LEARN_C_ASM_H
#define LEARN_C_ASM_H

int Add(int a, int b) {
    int res = 0;
    asm(
    "add %w[result], %w[i], %w[j]"
    : [result] "=r"(res)
    : [i] "r"(a), [j] "r"(b)
    );
}

extern int Add(int, int);

int testASM() {
    int b = 1, c = 2;
    int a = Add(b, c);
    printf("res =  %d\n", a);
    return 0;
}

int b = 3;

double f2(double a) {
    return a * a;
}

#endif //LEARN_C_ASM_H
