int __arr_4177[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 80;
    int v2 = 100;
    int v3 = 88;
    int v4 = 21;
    int v5 = 95;
    int v6 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_4177[i] = v1 + i; }
    if (v5 > v2) { v5 = v2; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
