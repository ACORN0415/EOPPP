int __arr_1015[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 8;
    int v2 = 71;
    int v3 = 31;
    int v4 = 18;
    int v5 = 95;
    int i;
    v0 = v0 * 8;
    v3 = v3 + v5;
    for (i = 0; i < 10; i++) { __arr_1015[i] = v3 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
