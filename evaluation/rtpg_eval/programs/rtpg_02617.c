int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 85;
    int v2 = 96;
    int v3 = 66;
    int v4 = 31;
    int v5 = 76;
    int v6 = 88;
    int i;
    v0 = 91;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
