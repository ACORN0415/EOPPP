int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 0;
    int v1 = 8;
    int v2 = 13;
    int v3 = 67;
    int v4 = 48;
    int v5 = 8;
    int i;
    for (i = 0; i < 20; i++) {
        v4 = v4 + v3;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
