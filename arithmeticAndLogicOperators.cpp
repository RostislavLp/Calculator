#include "arithmeticAndLogicOperators.h"

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a / b;
}

int mod(int a, int b) {
    return a % b;
}

int unaryPlus(int a) {
    return a;
}

int unaryMinus(int a) {
    return -a;
}

bool negat(bool a) {
    return !a;
}

bool conjunct(bool a, bool b) {
    return a && b;
}

bool disjunct(bool a, bool b) {
    return a || b;
}

bool exclusiveOr(bool a, bool b) {
    return a != b;
}

bool conjunctionNegation(bool a, bool b) {
    return !(a && b);
}

bool disjunctionNegation(bool a, bool b) {
    return !(a || b);
}
