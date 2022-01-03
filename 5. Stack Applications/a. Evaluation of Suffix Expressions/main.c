#include <stdio.h>

#define MX 10

int stack[MX], top = -1;

// Check char is an operator
int isOperator(char item){
    // if given character matches below switch cases
    // function will return 1 otherwise 0
    switch (item)
    {
        case '+':
        case '-':
        case '*':
        case '/':
        case '%':
        case '^': return 1;
        default:  return 0;
    }
}