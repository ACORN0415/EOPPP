int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 78;
    int v1 = 58;
    int v2 = 85;
    int v3 = 1;
    int v4 = 85;
    int v5 = 59;
    int v6 = 26;
    int i;
    v6 = v6 * 6;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v3;
    }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }
