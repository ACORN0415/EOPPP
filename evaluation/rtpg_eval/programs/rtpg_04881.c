int __arr_4881[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 81;
    int v2 = 37;
    int v3 = 79;
    int v4 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_4881[i] = v3 + i; }
    v4 = 92;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
