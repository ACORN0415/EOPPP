int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1168[10];
int test_func(void) {
    int v0 = 81;
    int v1 = 1;
    int v2 = 70;
    int v3 = 2;
    int v4 = 11;
    int v5 = 43;
    int i;
    for (i = 0; i < 10; i++) { __arr_1168[i] = v3 + i; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
