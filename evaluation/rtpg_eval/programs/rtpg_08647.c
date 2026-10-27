int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8647[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 49;
    int v2 = 72;
    int i;
    v2 = 62;
    for (i = 0; i < 10; i++) { __arr_8647[i] = v1 + i; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = __helper(v1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
