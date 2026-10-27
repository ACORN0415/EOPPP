int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 71;
    int v1 = 48;
    int v2 = 97;
    int v3 = 38;
    int v4 = 51;
    int v5 = 7;
    int v6 = 39;
    int v7 = 52;
    int i;
    if (v0 > v5) { v0 = v5; }
    for (i = 0; i < 15; i++) {
        v0 = v0 + v5;
    }
    v0 = v0 * 5;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
