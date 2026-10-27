int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 78;
    int v2 = 85;
    int v3 = 41;
    int v4 = 7;
    int v5 = 55;
    int v6 = 2;
    int v7 = 5;
    int i;
    v3 = v3 - v2;
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }
