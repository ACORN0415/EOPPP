int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 67;
    int v1 = 49;
    int v2 = 47;
    int v3 = 13;
    int v4 = 55;
    int v5 = 91;
    int v6 = 96;
    int v7 = 55;
    int i;
    v5 = v5 - v6;
    v2 = v2 * 5;
    v3 = __helper(v3);
    v2 = v2 & v4;
    return v0;
}
int main(void) { return test_func(); }
