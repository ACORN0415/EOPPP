int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6675[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 26;
    int v2 = 26;
    int v3 = 72;
    int v4 = 9;
    int v5 = 75;
    int v6 = 33;
    int i;
    for (i = 0; i < 10; i++) { __arr_6675[i] = v4 + i; }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
