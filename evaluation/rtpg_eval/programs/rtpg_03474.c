int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 100;
    int v1 = 66;
    int v2 = 20;
    int v3 = 42;
    int v4 = 13;
    int v5 = 88;
    int v6 = 48;
    int v7 = 38;
    int i;
    v5 = v5 - v0;
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
