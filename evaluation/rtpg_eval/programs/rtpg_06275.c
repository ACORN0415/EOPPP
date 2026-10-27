int __arr_6275[10];
int test_func(void) {
    int v0 = 73;
    int v1 = 7;
    int v2 = 48;
    int v3 = 46;
    int v4 = 19;
    int v5 = 56;
    int i;
    for (i = 0; i < 10; i++) { __arr_6275[i] = v1 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
