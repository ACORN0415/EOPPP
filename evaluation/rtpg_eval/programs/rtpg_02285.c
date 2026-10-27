int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 50;
    int v1 = 94;
    int v2 = 91;
    int v3 = 75;
    int v4 = 88;
    int i;
    v0 = v0 * 7;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v4;
    }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
