int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7852[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 37;
    int v2 = 54;
    int v3 = 46;
    int v4 = 5;
    int v5 = 95;
    int v6 = 29;
    int v7 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_7852[i] = v5 + i; }
    v2 = v2 * 6;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
