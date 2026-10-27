int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 42;
    int v1 = 7;
    int v2 = 4;
    int v3 = 96;
    int v4 = 57;
    int v5 = 56;
    int v6 = 32;
    int i;
    v0 = 71;
    if (v4 > v6) { v4 = v6; }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
