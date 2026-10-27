int __arr_2027[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 32;
    int v2 = 77;
    int v3 = 73;
    int v4 = 22;
    int v5 = 88;
    int i;
    v2 = v2 + v3;
    for (i = 0; i < 10; i++) { __arr_2027[i] = v5 + i; }
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }
