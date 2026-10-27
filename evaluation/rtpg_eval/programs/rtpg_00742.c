int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 42;
    int v2 = 11;
    int v3 = 8;
    int v4 = 39;
    int v5 = 66;
    int v6 = 43;
    int v7 = 4;
    int i;
    v7 = v7 + v4;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
