//#include <stdio.h>

//int Add(int a, int b) {
//    int res = 0;
//    asm(
//    "add %w[result], %w[i], %w[j]"
//    : [result] "=r"(res)
//    : [i] "r"(a), [j] "r"(b)
//    );
//}
//
//extern int Add(int, int);
//
//int testASM(int argc, char **argv) {
//    int b = 1, c = 2;
//    int a = Add(b, c);
//    printf("res =  %d\n", a);
//    return 0;
//}

double f2(double a) {
    //do something here...
    return a * a;
}