int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 94;
    int v2 = 4;
    int v3 = 36;
    int v4 = 91;
    int v5 = 79;
    int v6 = 80;
    int v7 = 80;
    int i;
    v0 = v0 * 4;
    for (i = 0; i < 8; i++) {
        v6 = v6 + v2;
    }
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
