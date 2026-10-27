int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 22;
    int v1 = 95;
    int v2 = 38;
    int v3 = 42;
    int v4 = 77;
    int v5 = 8;
    int i;
    v0 = 44;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
