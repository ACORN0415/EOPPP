int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_577[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 10;
    int v2 = 25;
    int i;
    for (i = 0; i < 10; i++) { __arr_577[i] = v0 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }
