int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 33;
    int v1 = 11;
    int v2 = 49;
    int v3 = 57;
    int v4 = 29;
    int v5 = 31;
    int v6 = 77;
    int v7 = 0;
    int i;
    v2 = v2 - v4;
    v2 = v2 + v4;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
