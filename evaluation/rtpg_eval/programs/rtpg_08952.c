int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 79;
    int v1 = 37;
    int v2 = 0;
    int i;
    v2 = v2 * 6;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
