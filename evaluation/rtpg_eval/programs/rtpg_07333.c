int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 26;
    int v1 = 34;
    int v2 = 52;
    int v3 = 48;
    int v4 = 64;
    int v5 = 67;
    int v6 = 18;
    int v7 = 37;
    int i;
    v5 = v5 * 5;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
