int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 32;
    int v1 = 70;
    int v2 = 43;
    int v3 = 64;
    int v4 = 82;
    int i;
    v4 = v4 * 9;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
