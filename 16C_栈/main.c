#include "func.h"

int main() {
    stack s;
    memset(&s,0, sizeof(s));
    push(&s,5);
    push(&s,3);
    push(&s,7);
    pop(&s);
    top(&s);
}
