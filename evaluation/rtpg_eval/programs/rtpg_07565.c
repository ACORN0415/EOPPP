int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 66;
    int v1 = 83;
    int v2 = 67;
    int v3 = 9;
    int v4 = 76;
    int v5 = 7;
    int v6 = 93;
    int v7 = 33;
    int i;
    v7 = v7 + v5;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v6;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }
