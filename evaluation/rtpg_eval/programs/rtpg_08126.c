int __arr_8126[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 85;
    int v2 = 22;
    int v3 = 16;
    int v4 = 36;
    int v5 = 58;
    int v6 = 4;
    int i;
    for (i = 0; i < 10; i++) { __arr_8126[i] = v1 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v2 = v2 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }
