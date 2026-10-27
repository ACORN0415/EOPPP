int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 53;
    int v2 = 26;
    int v3 = 22;
    int v4 = 27;
    int v5 = 20;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v5;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }
