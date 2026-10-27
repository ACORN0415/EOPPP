int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6348[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 68;
    int v2 = 93;
    int v3 = 40;
    int v4 = 18;
    int v5 = 53;
    int v6 = 99;
    int v7 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_6348[i] = v2 + i; }
    v7 = v7 + v3;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
