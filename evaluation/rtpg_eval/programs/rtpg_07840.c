int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 20;
    int v1 = 94;
    int v2 = 94;
    int v3 = 99;
    int v4 = 96;
    int v5 = 35;
    int v6 = 14;
    int i;
    v4 = v4 - v2;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
