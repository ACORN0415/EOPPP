int __arr_7979[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 2;
    int v2 = 5;
    int v3 = 35;
    int v4 = 9;
    int v5 = 84;
    int i;
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_7979[i] = v3 + i; }
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
