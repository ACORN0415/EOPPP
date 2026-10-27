int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 18;
    int v1 = 2;
    int v2 = 88;
    int v3 = 81;
    int v4 = 35;
    int v5 = 18;
    int v6 = 18;
    int v7 = 0;
    int i;
    v5 = v5 + v2;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
