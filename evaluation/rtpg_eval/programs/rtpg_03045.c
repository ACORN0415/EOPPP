int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 48;
    int v1 = 71;
    int v2 = 100;
    int v3 = 95;
    int v4 = 19;
    int v5 = 25;
    int v6 = 67;
    int v7 = 40;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v1;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
