int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5754[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 32;
    int v2 = 10;
    int v3 = 84;
    int v4 = 16;
    int v5 = 83;
    int v6 = 64;
    int v7 = 74;
    int i;
    for (i = 0; i < 10; i++) { __arr_5754[i] = v6 + i; }
    v4 = v4 + v0;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
