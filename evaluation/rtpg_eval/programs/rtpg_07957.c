int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7957[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 40;
    int v2 = 86;
    int v3 = 97;
    int v4 = 78;
    int v5 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_7957[i] = v4 + i; }
    v3 = v3 + v5;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
