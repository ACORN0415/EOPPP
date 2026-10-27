int __arr_8755[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 91;
    int v2 = 56;
    int v3 = 38;
    int v4 = 51;
    int v5 = 2;
    int v6 = 17;
    int i;
    for (i = 0; i < 10; i++) { __arr_8755[i] = v3 + i; }
    v2 = v2 + v2;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
