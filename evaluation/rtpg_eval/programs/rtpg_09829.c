int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 10;
    int v1 = 57;
    int v2 = 67;
    int v3 = 69;
    int v4 = 82;
    int v5 = 62;
    int v6 = 38;
    int i;
    v4 = v4 + v5;
    v4 = v4 | v0;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
