int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 95;
    int v1 = 50;
    int v2 = 96;
    int v3 = 74;
    int v4 = 57;
    int v5 = 70;
    int v6 = 42;
    int i;
    v2 = v2 * 2;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
