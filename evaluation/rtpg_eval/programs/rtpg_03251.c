int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 15;
    int v2 = 4;
    int v3 = 24;
    int i;
    v2 = v2 * 2;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    v3 = __helper(v3);
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }
