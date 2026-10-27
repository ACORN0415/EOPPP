int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 5;
    int v1 = 44;
    int v2 = 26;
    int v3 = 60;
    int v4 = 34;
    int v5 = 43;
    int v6 = 57;
    int i;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v0;
    }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }
