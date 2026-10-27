int __arr_4[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 69;
    int v2 = 34;
    int v3 = 10;
    int v4 = 67;
    int v5 = 97;
    int v6 = 33;
    int v7 = 0;
    int i;
    for (i = 0; i < 14; i++) {
        v5 = v5 + v2;
    }
    v2 = v2 - v7;
    for (i = 0; i < 10; i++) { __arr_4[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }
