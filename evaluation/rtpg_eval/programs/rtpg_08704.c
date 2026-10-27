int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 7;
    int v1 = 62;
    int v2 = 42;
    int v3 = 30;
    int v4 = 44;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v2;
    }
    v3 = v3 + v0;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
