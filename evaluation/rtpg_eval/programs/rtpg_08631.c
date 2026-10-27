int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 39;
    int v1 = 88;
    int v2 = 35;
    int v3 = 14;
    int v4 = 42;
    int v5 = 5;
    int v6 = 50;
    int v7 = 20;
    int i;
    v5 = v5 + v3;
    v1 = v1 - v4;
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }
