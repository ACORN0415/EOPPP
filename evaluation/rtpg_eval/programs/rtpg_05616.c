int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 61;
    int v1 = 82;
    int v2 = 16;
    int v3 = 54;
    int v4 = 77;
    int i;
    v0 = v0 * 10;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
