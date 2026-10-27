int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 35;
    int v1 = 18;
    int v2 = 42;
    int v3 = 17;
    int v4 = 86;
    int v5 = 20;
    int i;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
