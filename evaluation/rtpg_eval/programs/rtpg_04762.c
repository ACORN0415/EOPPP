int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 39;
    int v2 = 34;
    int v3 = 92;
    int v4 = 46;
    int v5 = 0;
    int v6 = 39;
    int v7 = 26;
    int i;
    v0 = 62;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
