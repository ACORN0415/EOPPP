int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 4;
    int v1 = 96;
    int v2 = 6;
    int v3 = 45;
    int v4 = 85;
    int v5 = 66;
    int v6 = 51;
    int i;
    v3 = v3 + v0;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v4;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }
