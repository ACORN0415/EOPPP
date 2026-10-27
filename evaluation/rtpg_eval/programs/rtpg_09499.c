int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 11;
    int v1 = 77;
    int v2 = 43;
    int v3 = 80;
    int v4 = 89;
    int v5 = 10;
    int i;
    v2 = 47;
    for (i = 0; i < 8; i++) {
        v5 = v5 + v0;
    }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
