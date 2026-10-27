int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 86;
    int v1 = 14;
    int v2 = 85;
    int v3 = 38;
    int v4 = 64;
    int v5 = 76;
    int v6 = 62;
    int i;
    v1 = v1 * 8;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
