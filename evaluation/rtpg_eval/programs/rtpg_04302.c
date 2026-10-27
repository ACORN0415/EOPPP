int __arr_4302[10];
int test_func(void) {
    int v0 = 42;
    int v1 = 68;
    int v2 = 81;
    int v3 = 79;
    int v4 = 48;
    int v5 = 40;
    int i;
    v0 = v0 - v4;
    for (i = 0; i < 10; i++) { __arr_4302[i] = v1 + i; }
    v4 = v4 * 8;
    if (v5 > 0) goto __skip;
    v5 = 999;
__skip:
    v5 = v5 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
