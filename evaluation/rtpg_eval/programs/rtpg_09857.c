int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 93;
    int v1 = 81;
    int v2 = 72;
    int v3 = 92;
    int v4 = 35;
    int v5 = 55;
    int v6 = 94;
    int v7 = 22;
    int i;
    v2 = v2 + v0;
    v7 = v7 | v2;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }
