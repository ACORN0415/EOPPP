int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1273[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 80;
    int v2 = 87;
    int v3 = 39;
    int v4 = 68;
    int v5 = 74;
    int v6 = 95;
    int i;
    v4 = v4 - v2;
    for (i = 0; i < 10; i++) { __arr_1273[i] = v4 + i; }
    v6 = 32;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
