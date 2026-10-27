int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 3;
    int v1 = 80;
    int v2 = 77;
    int v3 = 53;
    int v4 = 91;
    int v5 = 99;
    int v6 = 32;
    int v7 = 35;
    int i;
    v0 = v0 + v6;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
