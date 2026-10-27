int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 1;
    int v1 = 20;
    int v2 = 20;
    int v3 = 64;
    int v4 = 13;
    int v5 = 37;
    int i;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v1;
    }
    v5 = v5 - v1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
