int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 77;
    int v1 = 74;
    int v2 = 9;
    int v3 = 86;
    int v4 = 22;
    int i;
    v4 = v4 * 9;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
