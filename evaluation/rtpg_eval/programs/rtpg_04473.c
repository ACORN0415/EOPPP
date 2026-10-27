int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 1;
    int v1 = 9;
    int v2 = 36;
    int v3 = 89;
    int v4 = 63;
    int v5 = 58;
    int v6 = 52;
    int v7 = 99;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v7;
    }
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }
