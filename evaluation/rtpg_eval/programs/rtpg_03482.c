int __arr_3482[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 69;
    int v2 = 91;
    int v3 = 12;
    int v4 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_3482[i] = v2 + i; }
    v1 = 85;
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
