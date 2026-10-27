int __arr_2631[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 43;
    int v2 = 16;
    int v3 = 11;
    int v4 = 87;
    int v5 = 1;
    int v6 = 62;
    int i;
    for (i = 0; i < 8; i++) {
        v6 = v6 + v3;
    }
    v6 = v6 - v4;
    for (i = 0; i < 10; i++) { __arr_2631[i] = v2 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }
