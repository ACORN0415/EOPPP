int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9285[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 61;
    int v2 = 42;
    int v3 = 89;
    int v4 = 53;
    int v5 = 31;
    int v6 = 31;
    int v7 = 41;
    int i;
    for (i = 0; i < 10; i++) { __arr_9285[i] = v0 + i; }
    v6 = 20;
    v5 = __helper(v5);
    v4 = v4 / (v5 + 1);
    return v0;
}
int main(void) { return test_func(); }
