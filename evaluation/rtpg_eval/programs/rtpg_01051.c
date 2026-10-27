int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 1;
    int v2 = 86;
    int v3 = 67;
    int v4 = 28;
    int v5 = 10;
    int v6 = 98;
    int i;
    if (v5 > v1) { v5 = v1; }
    v4 = v4 * 5;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v5;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
