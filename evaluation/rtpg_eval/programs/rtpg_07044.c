int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7044[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 31;
    int v2 = 28;
    int v3 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_7044[i] = v3 + i; }
    v1 = v1 * 4;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v3;
    }
    v3 = __helper(v3);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }
