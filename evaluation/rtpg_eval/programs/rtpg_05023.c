int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 71;
    int v2 = 77;
    int v3 = 3;
    int v4 = 77;
    int v5 = 96;
    int v6 = 81;
    int i;
    v2 = 3;
    v3 = v3 + v4;
    for (i = 0; i < 17; i++) {
        v6 = v6 + v3;
    }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
