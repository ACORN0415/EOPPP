int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_649[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 22;
    int v2 = 25;
    int v3 = 76;
    int v4 = 77;
    int v5 = 52;
    int i;
    v4 = 36;
    v3 = v3 * 3;
    for (i = 0; i < 10; i++) { __arr_649[i] = v1 + i; }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
