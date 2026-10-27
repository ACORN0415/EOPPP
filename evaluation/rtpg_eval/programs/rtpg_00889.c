int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 46;
    int v1 = 56;
    int v2 = 24;
    int v3 = 23;
    int v4 = 22;
    int i;
    v0 = v0 * 2;
    v4 = v4 + v3;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
