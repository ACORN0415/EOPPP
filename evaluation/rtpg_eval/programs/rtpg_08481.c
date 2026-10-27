int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 77;
    int v1 = 77;
    int v2 = 69;
    int v3 = 15;
    int v4 = 43;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
