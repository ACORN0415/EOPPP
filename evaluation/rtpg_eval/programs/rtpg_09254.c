int __arr_9254[10];
int test_func(void) {
    int v0 = 23;
    int v1 = 16;
    int v2 = 36;
    int v3 = 45;
    int v4 = 91;
    int v5 = 31;
    int i;
    if (v3 > v4) { v3 = v4; }
    for (i = 0; i < 10; i++) { __arr_9254[i] = v0 + i; }
    v2 = v2 - v3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }
