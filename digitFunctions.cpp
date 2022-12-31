#include "digitFunctions.h"

int bitwiseNot(int a) {
    return ~a;
}

int bitwiseOr(int a, int b) {
    return a | b;
}

int bitwiseAnd(int a, int b) {
    return a & b;
}

int bitwiseExclusiveOr(int a, int b) {
    return a ^ b;
}

int bitwiseConjunctionNegation(int a, int b) {
    return ~(a & b);
}

int bitwiseDisjunctionNegation(int a, int b) {
    return ~(a | b);
}

int leftShift(int a, int b) {
    return a << b;
}

int rightShift(int a, int b) {
    return a >> b;
}
