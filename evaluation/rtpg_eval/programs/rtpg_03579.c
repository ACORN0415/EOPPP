int __arr_3579[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 9;
    int v2 = 84;
    int v3 = 16;
    int i;
    v0 = v0 + v2;
    v2 = v2 * 5;
    for (i = 0; i < 10; i++) { __arr_3579[i] = v0 + i; }
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
