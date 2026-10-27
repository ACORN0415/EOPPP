int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 77;
    int v1 = 2;
    int v2 = 78;
    int v3 = 64;
    int v4 = 99;
    int v5 = 51;
    int v6 = 71;
    int v7 = 70;
    int i;
    v2 = v2 - v5;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
